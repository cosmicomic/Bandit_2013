#include "arm.h"

Arm::Arm(SpeedController *armMotor, DigitalInput *backLimitSwitch, DigitalInput *frontLimitSwitch) : Component() {
	mArmMotor = armMotor;
	mBackLimitSwitch = backLimitSwitch;
	mFrontLimitSwitch = frontLimitSwitch;
}

void Arm::MoveForward() {
	if (!mFrontLimitSwitch->Get()) {
		mArmMotor->Set(cArmSpeed);
	} else {
		Stop();
	}
}

void Arm::MoveBackward() {
	if (!mBackLimitSwitch->Get()) {
		mArmMotor->Set(-cArmSpeed);
	} else {
		Stop();
	}
}

Arm::~Arm() {
	//
}

void Arm::Stop() {
	mArmMotor->Set(0.0);
}

#include "arm.h"

Arm::Arm(SpeedController *armMotor, DigitalInput *backLimitSwitch, DigitalInput *frontLimitSwitch) {
	mArmMotor = armMotor;
	mBackLimitSwitch = backLimitSwitch;
	mFrontLimitSwitch = frontLimitSwitch;
}

void Arm::MoveForward() {
	if (!mFrontLimitSwitch) {
		mArmMotor->Set(cArmSpeed);
	} else {
		Stop();
	}
}

void Arm::MoveBackward() {
	if (!mBackLimitSwitch) {
		mArmMotor->Set(-cArmSpeed);
	} else {
		Stop();
	}
}

void Arm::Stop() {
	mArmMotor->Set(0.0);
}

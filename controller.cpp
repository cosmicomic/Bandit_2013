#include "controller.h"

JoystickController::JoystickController(Joystick *lStick, Joystick *rStick, Joystick *tStick, map<string, Component *> &components) {
	mLeftJoystick = lStick;
	mRightJoystick = rStick;
	mTwistJoystick = tStick;
	
	mComponents = components;
	
	if (mComponents.count("Drive")) {
		mDrive = (Drive *) mComponents.find("Drive")->second;
	} else if (mComponents.count("Launcher")) {
		mLauncher = (Launcher *) mComponents.find("Launcher")->second;
	} else if (mComponents.count("Arm")) {
		mArm = (Arm *) mComponents.find("Arm")->second;
	}
}

void JoystickController::Run() {
	RunDrive();
	RunLauncher();
	RunArm();
}

void JoystickController::RunDrive() {
	// tank drive
	mDrive->GetDrive()->TankDrive(mLeftJoystick, mRightJoystick);
}

void JoystickController::RunLauncher() {
	mLauncher->Launch(mTwistJoystick->GetY());
}

void JoystickController::RunArm() {
	if (mTwistJoystick->GetRawButton(5)) {
		mArm->MoveForward();
	} else if (mTwistJoystick->GetRawButton(3)) {
		mArm->MoveBackward();
	} else {
		mArm->Stop();
	}
}

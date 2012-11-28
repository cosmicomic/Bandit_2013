#include "controller.h"

JoystickController::JoystickController(Joystick *lStick, Joystick *rStick, Joystick *tStick, map<string, Component *> &components) {
	mLeftJoystick = lStick;
	mRightJoystick = rStick;
	mTwistJoystick = tStick;
	
	mComponents = components;
	
	if (mComponents.count("Drive") > 0) {
		mDrive = (Drive *) mComponents.find("Drive")->second;
	} else if (mComponents.count("Launcher") > 0) {
		mLauncher = (Launcher *) mComponents.find("Launcher")->second;
	} else if (mComponents.count("Arm") > 0) {
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

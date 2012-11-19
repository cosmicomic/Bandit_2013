#include "launcher.h"

Launcher::Launcher(Elevator *elevator, Shooter *shooter) {
	mElevator = elevator;
	mShooter = shooter;
}

Elevator::Elevator(DigitalInput *limitSwitch, SpeedController *elevatorMotor) {
	mLimitSwitch = limitSwitch;
	mElevatorMotor = elevatorMotor;
}

Shooter::Shooter(SpeedController *topLeft, SpeedController *topRight, SpeedController *bottomLeft, SpeedController *bottomRight) {
	mTopLeftMotor = topLeft;
	mTopRightMotor = topRight;
	mBottomLeftMotor = bottomLeft;
	mBottomRightMotor = bottomRight;
}

void Shooter::SetSpeed(double speed) {
	mTopLeftMotor->Set(speed);
	mTopRightMotor->Set(speed);
	mBottomLeftMotor->Set(-speed);
	mBottomRightMotor->Set(-speed);
}

void Elevator::MoveElevator() {
	mElevatorMotor->Set(cElevatorSpeed);
}

void Launcher::Launch(double speed) {
	mShooter->SetSpeed(speed);
	if (speed != 0) {
		mElevator->MoveElevator();
	}
}

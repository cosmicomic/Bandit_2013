#include "launcher.h"

Launcher::Launcher(Elevator *elevator, Shooter *shooter) : Component() {
	mElevator = elevator;
	mShooter = shooter;
}

Launcher::~Launcher() {
	//
}

Elevator::Elevator(DigitalInput *limitSwitch, SpeedController *elevatorMotor) {
	mLimitSwitch = limitSwitch;
	mElevatorMotor = elevatorMotor;
}

Elevator::~Elevator() {
	//
}

Shooter::Shooter(SpeedController *topLeft, SpeedController *topRight, SpeedController *bottomLeft, SpeedController *bottomRight) {
	mTopLeftMotor = topLeft;
	mTopRightMotor = topRight;
	mBottomLeftMotor = bottomLeft;
	mBottomRightMotor = bottomRight;
}

Shooter::~Shooter() {
	//
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

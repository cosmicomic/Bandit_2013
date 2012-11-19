#include "robot.h"

void MainRobot::RobotInit(void) {
	// watchdog
	mWatchdog = new Watchdog();
	mWatchdog->SetExpiration(cWatchdogExpiration);
	
	//hardware
	mRightJoystick = new Joystick(Ports::Usb1);
	mLeftJoystick = new Joystick(Ports::Usb2);
	mTwistJoystick = new Joystick(Ports::Usb3);
	
	mRearLeftMotor = new Jaguar(Ports::DigitalSidecar::Pwm2);
	mRearRightMotor = new Jaguar(Ports::DigitalSidecar::Pwm4);
	mFrontLeftMotor = new Jaguar(Ports::DigitalSidecar::Pwm1);
	mFrontRightMotor = new Jaguar(Ports::DigitalSidecar::Pwm3);
	
	mTopLeftMotor = new Jaguar(Ports::DigitalSidecar::Pwm5);
	mTopRightMotor = new Jaguar(Ports::DigitalSidecar::Pwm6);
	mBottomLeftMotor = new Jaguar(Ports::DigitalSidecar::Pwm7);
	mBottomRightMotor = new Jaguar(Ports::DigitalSidecar::Pwm8);
	
	mElevatorMotor = new Jaguar(Ports::DigitalSidecar::Pwm9);
	mArmMotor = new Jaguar(Ports::DigitalSidecar::Pwm10);
	
	mElevatorLimitSwitch = new DigitalInput(Ports::Crio::Module1, Ports::DigitalSidecar::Gpio1);
	mArmBackLimitSwitch = new DigitalInput(Ports::Crio::Module1, Ports::DigitalSidecar::Gpio2);
	mArmFrontLimitSwitch = new DigitalInput(Ports::Crio::Module1, Ports::DigitalSidecar::Gpio3);
	
	//software
	mRobotDrive = new RobotDrive(mFrontLeftMotor, mRearLeftMotor, mFrontRightMotor, mRearRightMotor);
	mDrive = new Drive(mRobotDrive);

	mShooter = new Shooter(mTopLeftMotor, mTopRightMotor, mBottomLeftMotor, mBottomRightMotor);
	mElevator = new Elevator(mElevatorLimitSwitch, mElevatorMotor);
	mLauncher = new Launcher(mElevator, mShooter);
	
	map<string, Component *>mComponents;
	mComponents.insert(pair<string, Component *>("Drive", mDrive));
	mComponents.insert(pair<string, Component *>("Launcher", mLauncher));
	mComponents.insert(pair<string, Component *>("Arm", mArm));
	
	//controllers
	mJoystickController = new JoystickController(mLeftJoystick, mRightJoystick, mTwistJoystick, mComponents);
	
	return;
}

void MainRobot::OperatorControl() {
	mWatchdog->SetEnabled(true);
	
	while (IsOperatorControl()) {
		mJoystickController->Run();
		GetWatchdog().Feed();
		Wait(cMotorWait);
	}
	
	return;
}

void MainRobot::Autonomous() {
	while (IsAutonomous()) {
		GetWatchdog().Feed();
		Wait(cMotorWait);
	}
}

START_ROBOT_CLASS(MainRobot);

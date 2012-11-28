#ifndef _ROBOT_H_
#define _ROBOT_H_

#include "WPILib.h"
#include "component.h"
#include "ports.h"
#include "drive.h"
#include "controller.h"
#include "arm.h"
#include "launcher.h"

class MainRobot : public SimpleRobot {
public:
	void OperatorControl();
	void RobotInit(void);
	void Autonomous();
	~MainRobot();
	
private:
	static const double cMotorWait = 0.01;
	static const double cWatchdogExpiration = 1;
	
protected:
	Watchdog *mWatchdog;
	
	Joystick *mRightJoystick;
	Joystick *mLeftJoystick;
	Joystick *mTwistJoystick;
	
	SpeedController *mRearLeftMotor;
	SpeedController *mRearRightMotor;
	SpeedController *mFrontLeftMotor;
	SpeedController *mFrontRightMotor;
	
	SpeedController *mTopLeftMotor;
	SpeedController *mTopRightMotor;
	SpeedController *mBottomLeftMotor;
	SpeedController *mBottomRightMotor;
	
	SpeedController *mElevatorMotor;
	
	SpeedController *mArmMotor;
	
	DigitalInput *mElevatorLimitSwitch;
	DigitalInput *mArmBackLimitSwitch;
	DigitalInput *mArmFrontLimitSwitch;
	
	map<string, Component *> mComponents;
	Drive *mDrive;
	RobotDrive *mRobotDrive;
	Launcher *mLauncher;
	Elevator *mElevator;
	Shooter *mShooter;
	Arm *mArm;
	JoystickController *mJoystickController;
};

#endif

#ifndef LAUNCHER_H_
#define LAUNCHER_H_

#include "WPILib.h"
#include "component.h"

class Elevator : public Component {
public:
	Elevator(DigitalInput *, SpeedController *);
	~Elevator();
	void MoveElevator();
private:
	static const double cElevatorSpeed = 0.3;
protected:
	DigitalInput *mLimitSwitch;
	SpeedController *mElevatorMotor;
};

class Shooter : public Component {
public:
	Shooter(SpeedController *, SpeedController *, SpeedController *, SpeedController *);
	void SetSpeed(double);
	~Shooter();
protected:
	SpeedController *mTopLeftMotor;
	SpeedController *mTopRightMotor;
	SpeedController *mBottomLeftMotor;
	SpeedController *mBottomRightMotor;
};

class Launcher : public Component {
public:
	Launcher(Elevator *, Shooter *);
	void Launch(double);
	~Launcher();
protected:
	Elevator *mElevator;
	Shooter *mShooter;
};

#endif

#ifndef ARM_H_
#define ARM_H_

#include "WPILib.h"
#include "Component.h"

class Arm : public Component {
public:
	Arm(SpeedController *, DigitalInput *, DigitalInput *);
	void MoveForward();
	void MoveBackward();
	void Stop();
private:
	static const double cArmSpeed = 0.3;
protected:
	SpeedController *mArmMotor;
	DigitalInput *mBackLimitSwitch;
	DigitalInput *mFrontLimitSwitch;
};

#endif

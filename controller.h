#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "WPILib.h"
#include "component.h"
#include "drive.h"
#include "launcher.h"
#include "arm.h"

class Controller {
	// none
};

class JoystickController : public Controller {
public:
	Joystick *mLeftJoystick;
	Joystick *mRightJoystick;
	Joystick *mTwistJoystick;
	map<string, Component *> mComponents;
	Drive *mDrive;
	Launcher *mLauncher;
	Arm *mArm;
	void Run(void);
	JoystickController(Joystick *, Joystick *, Joystick *, map<string, Component *>&);
protected:
	void RunDrive();
	void RunLauncher();
	void RunArm();
};

#endif

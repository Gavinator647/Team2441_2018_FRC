#ifndef DriveJoystick_H
#define DriveJoystick_H

#include "../CommandBase.h"

class DriveJoystick : public CommandBase {
public:
	DriveJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveJoystick_H

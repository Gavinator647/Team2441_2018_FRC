#ifndef DriveJoystick_H
#define DriveJoystick_H

#include <Commands/Command.h>
#include "Robot.h"

class DriveJoystick : public frc::Command {
public:
	DriveJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveJoystick_H

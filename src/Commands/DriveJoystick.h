#ifndef DriveJoystick_H
#define DriveJoystick_H

#include <Commands/Command.h>
#include "../RobotMap.h"
#include "Commands/Subsystem.h"

class DriveJoystick : public frc::Command {
public:
	DriveJoystick();
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // DriveJoystick_H

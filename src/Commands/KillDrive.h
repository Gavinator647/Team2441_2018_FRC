#ifndef KillDrive_H
#define KillDrive_H

#include <Commands/Command.h>
#include "Robot.h"
#include "Subsystems/DriveTrain.h"

class KillDrive: public frc::Command {

public:
	KillDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // KillDrive_H

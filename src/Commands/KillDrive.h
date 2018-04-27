#ifndef KillDrive_H
#define KillDrive_H

#include <Commands/Command.h>
#include "Subsystems/DriveTrain.h"

class KillDrive: public frc::Command {

public:
	KillDrive();
	void Initialize() override;
	bool IsFinished() override;
};

#endif  // KillDrive_H

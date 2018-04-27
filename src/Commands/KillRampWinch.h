#ifndef KillRampWinch_H
#define KillRampWinch_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"

class KillRampWinch : public frc::Command {
public:
	KillRampWinch();
	void Initialize() override;
	bool IsFinished() override;
};

#endif  // KillRampWinch_H

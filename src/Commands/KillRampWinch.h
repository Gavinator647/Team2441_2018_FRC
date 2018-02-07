#ifndef KillRampWinch_H
#define KillRampWinch_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"

class KillRampWinch : public frc::Command {
public:
	KillRampWinch();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // KillRampWinch_H

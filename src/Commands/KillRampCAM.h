#ifndef KillRampCAM_H
#define KillRampCAM_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"

class KillRampCAM : public frc::Command {
public:
	KillRampCAM();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // KillRampCAM_H

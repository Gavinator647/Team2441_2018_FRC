#ifndef KillRampCAM_H
#define KillRampCAM_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"

class KillRampCAM : public frc::Command {
public:
	KillRampCAM();
	void Initialize() override;
	bool IsFinished() override;
};

#endif  // KillRampCAM_H

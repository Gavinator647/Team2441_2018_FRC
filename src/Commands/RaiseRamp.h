#ifndef RaiseRamp_H
#define RaiseRamp_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"

class RaiseRamp: public frc::Command {
public:
	RaiseRamp();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // RaiseRamp_H

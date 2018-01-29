#ifndef LowerRamp_H
#define LowerRamp_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"
#include "Robot.h"

class LowerRamp: public frc::Command {
public:
	LowerRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // LowerRamp_H

#ifndef killRamp_H
#define killRamp_H

#include <Commands/Command.h>

class KillRamp : public frc::Command {
public:
	KillRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // KillRamp_H

#ifndef RaiseRamp_H
#define RaiseRamp_H

#include <Commands/Command.h>

class RaiseRamp: public frc::Command {
private:
	static constexpr float RAISE_RAMP_TIME = 1;
public:
	RaiseRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // RaiseRamp_H

#ifndef RaiseRamp_H
#define RaiseRamp_H

#include <Commands/Command.h>

class RaiseRamp: public frc::Command {
private:
	static constexpr int RAISE_SPEED = 1;
public:
	RaiseRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // RaiseRamp_H

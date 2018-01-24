#ifndef LowerRamp_H
#define LowerRamp_H

#include <Commands/Command.h>

class LowerRamp: public frc::Command {
private:
	static constexpr float LOWER_RAMP_TIME = 1;
public:
	LowerRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // LowerRamp_H

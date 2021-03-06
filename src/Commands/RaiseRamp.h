#ifndef RaiseRamp_H
#define RaiseRamp_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"
#include <Timer.h>

class RaiseRamp: public frc::Command {
private:
	static constexpr float WINCH_TIME = 1.0;
	frc::Timer winch_time;
public:
	RaiseRamp();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // RaiseRamp_H

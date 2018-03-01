#ifndef LowerRamp_H
#define LowerRamp_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"
#include <Timer.h>

class LowerRamp: public frc::Command {
private:
	static constexpr float DRIVE_TIME = 0.25;
	frc::Timer lower_ramp_time;
public:
	LowerRamp();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // LowerRamp_H

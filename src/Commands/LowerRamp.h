#ifndef LowerRamp_H
#define LowerRamp_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"
#include "Robot.h"
#include <Timer.h>

class LowerRamp: public frc::Command {
private:
	static constexpr float DRIVE_TIME = 0;
	frc::Timer lower_ramp_time;
public:
	LowerRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // LowerRamp_H

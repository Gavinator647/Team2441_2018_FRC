#ifndef SlackRamp_H
#define SlackRamp_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"
#include <Timer.h>

class SlackRamp: public frc::Command {
private:
	static constexpr float SLACK_TIME = 2.0;
	frc::Timer slack_ramp_time;
public:
	SlackRamp();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // SlackRamp_H

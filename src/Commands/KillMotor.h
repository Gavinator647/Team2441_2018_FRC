#ifndef KillMotor_H
#define KillMotor_H

#include "Subsystems/Motor.h"
#include <Commands/Command.h>

class KillMotor : public frc::Command {

public:
	KillMotor();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // KillMotor_H

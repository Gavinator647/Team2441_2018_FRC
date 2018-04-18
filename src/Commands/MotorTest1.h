#ifndef MotorTest1_H
#define MotorTest1_H

#include "Subsystems/Motor.h"
#include <Commands/Command.h>

class MotorTest1 : public frc::Command {

private:
	static constexpr float MOTOR_SPEED = 50.0;

public:
	MotorTest1();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // MotorTest1_H

#ifndef Motor_H
#define Motor_H

#include <Commands/Subsystem.h>
#include "RobotMap.h"
#include <Spark.h>
#include <PWMSpeedController.h>
#include <DigitalInput.h>

class Motor : public Subsystem {
private:

	frc::Spark motor_one { MOTOR_TEST_1 };
	frc::Spark motor_two { MOTOR_TEST_2 };
	frc::Spark motor_three { MOTOR_TEST_3 };
	frc::Spark motor_four { MOTOR_TEST_4 };

	int motor_speed = 0;

public:
	Motor();
	void start_motor (int speed);



	void InitDefaultCommand();
};

#endif  // Motor_H

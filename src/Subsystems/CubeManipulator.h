#ifndef CubeManipulator_H
#define CubeManipulator_H

#include <Commands/Subsystem.h>
#include "RobotMap.h"
#include <Spark.h>
#include <DigitalInput.h>

class CubeManipulator: public frc::Subsystem {
private:

	/// Motors to operate left side fly wheels.
	frc::Spark right_m { RIGHT_FLY_WHEELS_PORT };

	/// Motors to operate left side fly wheels.
	frc::Spark left_m { LEFT_FLY_WHEELS_PORT };

	frc::DigitalInput cube_sensor { CUBE_MANIPULATOR_SWITCH };
public:
	CubeManipulator();
	void start_left_fly_wheels(int speed);
	void start_right_fly_wheels(int speed);

	void InitDefaultCommand();
};

#endif  // CubeManipulator_H

#ifndef CubeManipulator_H
#define CubeManipulator_H

#include <Commands/Subsystem.h>
#include "RobotMap.h"
#include <Spark.h>

class CubeManipulator: public Subsystem {
private:

	/// Motors to operate left side fly wheels.
	frc::Spark right { RIGHT_FLY_WHEELS_PORT };

	/// Motors to operate left side fly wheels.
	frc::Spark left { LEFT_FLY_WHEELS_PORT };

public:
	void start_left_fly_wheels(int speed);
	void start_right_fly_wheels(int speed);

	void InitDefaultCommand();--
};

#endif  // CubeManipulator_H

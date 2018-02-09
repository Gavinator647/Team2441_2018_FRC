#ifndef CubeManipulator_H
#define CubeManipulator_H

#include <Commands/Subsystem.h>
#include "RobotMap.h"
#include <Spark.h>
#include <PWMSpeedController.h>
#include <DigitalInput.h>

class CubeManipulator: public frc::Subsystem {
private:

	/// Motors to operate left side fly wheels.
	frc::Spark right_m { RIGHT_FLY_WHEELS_PORT };

	/// Motors to operate left side fly wheels.
	frc::Spark left_m { LEFT_FLY_WHEELS_PORT };

	///Declaring that there exists a switch that tells us that the cube is in
	frc::DigitalInput cube_sensor { CUBE_MANIPULATOR_SWITCH };

	///declares that this variable that imma save in the source file exists
	int right_fly_wheels_speed = 0;

	///declares that this variable that imma save in the source file exists
	int left_fly_wheels_speed = 0;
public:
	CubeManipulator();
	void start_left_fly_wheels(int speed);
	void start_right_fly_wheels(int speed);
	bool is_cube_in ();


	void InitDefaultCommand();
};

#endif  // CubeManipulator_H

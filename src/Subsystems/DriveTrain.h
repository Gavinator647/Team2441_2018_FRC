#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include "Commands/DriveJoystick.h"
#include "RobotMap.h"
#include <Spark.h>

class DriveTrain: public frc::Subsystem {
private:
	/// Back left motor of drive system.
	frc::Spark back_left { LEFT_BACK_DRIVE_PORT };

	/// Back right motor of the drive system.
	frc::Spark back_right { RIGHT_BACK_DRIVE_PORT };

	/// Front left motor of the drive system.
	frc::Spark front_left { LEFT_FRONT_DRIVE_PORT };

	/// Front right motor of the drive system.
	frc::Spark front_right { RIGHT_FRONT_DRIVE_PORT };

	/// Current Drive Speed Value of Left Side of Drive Motors
	int left_drive_speed =0 ;
	/// Current Drive Speed Value of Right Side of Drive Motors
	int right_drive_speed =0;

public:
	DriveTrain();
	void start_left_motors(int speed);
	void start_right_motors(int speed);

	void InitDefaultCommand();
};

#endif  // DriveTrain_H

#include "DriveTrain.h"


/// Constructor. Nothing happens here.
DriveTrain::DriveTrain() :
		frc::Subsystem("DriveTrain") {

}

/// Constructor. Nothing happens here.
void DriveTrain::InitDefaultCommand() {
	SetDefaultCommand(new DriveJoystick());

}

/// Power the motor at a certain speed. The speed variable exists in the domain [-100
///,100]. A negative speed DriveTrains robot backward, a positive speed will DriveTrain the
/// robot forward. A speed of 0 will stop the motors.
void DriveTrain::start_left_motors(int speed) {
	double spark_input_value = speed / -100;
	front_left.Set(spark_input_value);
	back_left.Set(spark_input_value);
}

/// Power the motor at a certain speed. The speed variable exists in the domain [-100
///,100]. A negative speed DriveTrains robot backward, a positive speed will DriveTrain the
/// robot forward. A speed of 0 will stop the motors.
void DriveTrain::start_right_motors(int speed) {
	double spark_input_value = speed / 100;
	front_right.Set(spark_input_value);
	back_right.Set(spark_input_value);

}

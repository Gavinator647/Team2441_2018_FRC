#include "CubeManipulator.h"


/// Constructor, nothing happens here.
CubeManipulator::CubeManipulator() :
		Subsystem("CubeManipulator") {

}

/// Constructor, nothing happens here.
void CubeManipulator::InitDefaultCommand() {

}

/// Power the fly wheels at a certain speed. The speed variable exists in the domain
/// [-100,100]. A positive spins the fly wheels clockwise ,a negative speed spins the
///fly wheels counterclockwise.A speed of zero will stop the fly wheels.
void CubeManipulator::start_left_fly_wheels(int speed) {
	double spark_input_value = speed/100.0;
	left_m.Set(spark_input_value);
	left_fly_wheels_speed = speed;
}

/// Power the fly wheels at a certain speed. The speed variable exists in the domain
/// [-100,100]. A positive spins the fly wheels counterclockwise, a negative speed
///spins the fly wheels clockwise.A speed of zero will stop the fly wheels.
void CubeManipulator::start_right_fly_wheels(int speed) {
	double spark_input_value = -speed/100.0;
	right_m.Set(spark_input_value);
	right_fly_wheels_speed = speed;
}

/// Checks if cube is in, if cube is in the button will be pressed. If the button is
/// pressed cube in command will be disabled, only cube out and kill cube manipulator
/// commands will work.
bool CubeManipulator::is_cube_in() {
	return cube_sensor.Get();
}

///Lets a public function access a private variable
int CubeManipulator::get_left_fly_wheels_speed() {
	return left_fly_wheels_speed;
}

///exactly the same thing as the comment before
int CubeManipulator::get_right_fly_wheels_speed() {
	return right_fly_wheels_speed;
}

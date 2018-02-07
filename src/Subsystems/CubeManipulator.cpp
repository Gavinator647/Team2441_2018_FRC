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
	double spark_input_value = speed/100;
	left_m.Set(spark_input_value);
}

/// Power the fly wheels at a certain speed. The speed variable exists in the domain
/// [-100,100]. A positive spins the fly wheels counterclockwise, a negative speed
///spins the fly wheels clockwise.A speed of zero will stop the fly wheels.
void CubeManipulator::start_right_fly_wheels(int speed) {
	double spark_input_value = -speed/100;
	right_m.Set(spark_input_value);
}

/// Checks if cube is in, if cube is in the button will be pressed. If the button is
/// pressed cube in command will be disabled, only cube out and kill cube manipulator
/// commands will work.
bool CubeManipulator::is_cube_in() {
	return cube_sensor.Get();
}

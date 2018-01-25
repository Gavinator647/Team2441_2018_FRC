#include "CubeManipulator.h"
#include "../RobotMap.h"

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
	left_m.Set(static_cast<double>(speed / 100));

}

/// Power the fly wheels at a certain speed. The speed variable exists in the domain
/// [-100,100]. A positive spins the fly wheels counterclockwise, a negative speed
///spins the fly wheels clockwise.A speed of zero will stop the fly wheels.
void CubeManipulator::start_right_fly_wheels(int speed) {

}

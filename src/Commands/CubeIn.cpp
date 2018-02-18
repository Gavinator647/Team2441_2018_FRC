#include "CubeIn.h"
#include "Robot.h"

///Needs object Cube manipulator
CubeIn::CubeIn() :
		frc::Command("CubeIn") {
	Requires(&Robot::intake);
}

///Starts motor
void CubeIn::Initialize() {

	Robot::intake.start_left_fly_wheels(FLYWHEEL_SPEED);
	Robot::intake.start_right_fly_wheels(FLYWHEEL_SPEED);
}

///Loop until sensor says otherwise
bool CubeIn::IsFinished() {
	return Robot::intake.is_cube_in();
}

///Kill the cube manipulator
void CubeIn::End() {
	Robot::intake.start_left_fly_wheels(0);
	Robot::intake.start_right_fly_wheels(0);

}

/// Kill the cube manipulator
void CubeIn::Interrupted() {
	Robot::intake.start_left_fly_wheels(0);
	Robot::intake.start_right_fly_wheels(0);

}

#include "CubeIn.h"

///Needs object Cube manipulator
CubeIn::CubeIn() {
	Requires(Robot::intake);
}

///Starts motor
void CubeIn::Initialize() {
	Robot::intake->start_left_fly_wheels(FLYWHEEL_SPEED);
	Robot::intake->start_right_fly_wheels(FLYWHEEL_SPEED);
}

///Not needed
void CubeIn::Execute() {

}

///Loop until sensor says otherwise
bool CubeIn::IsFinished() {
	return false;
}

///Kill the cube manipulator
void CubeIn::End() {
	Robot::intake->start_left_fly_wheels(0);
	Robot::intake->start_right_fly_wheels(0);

}

/// Not needed
void CubeIn::Interrupted() {

}

#include "CubeOut.h"
///Needs object cube manipulator
CubeOut::CubeOut() : frc::Command("CubeOut") {
	Requires(&Robot::intake);

}

///Starts the motors
void CubeOut::Initialize() {
	Robot::intake.start_left_fly_wheels(FLYWHEEL_SPEED);
	Robot::intake.start_right_fly_wheels(FLYWHEEL_SPEED);

}

///Useless
void CubeOut::Execute() {

}

///No need to loop
bool CubeOut::IsFinished() {
	return false;
}

///Not needed
void CubeOut::End() {


}

///Not needed
void CubeOut::Interrupted() {
	Robot::intake.start_left_fly_wheels(0);
	Robot::intake.start_right_fly_wheels(0);

}

#include "KillCubeManipulator.h"

///Needs cube manipulator object
KillCubeManipulator::KillCubeManipulator() :
		frc::Command("KillCubeManipulator") {
	Requires(&Robot::intake);

}
///Fully stop the motors
void KillCubeManipulator::Initialize() {
	Robot::intake.start_left_fly_wheels(0);
	Robot::intake.start_right_fly_wheels(0);
}



///Does not need
void KillCubeManipulator::Execute() {

}

///Does not need to loop
bool KillCubeManipulator::IsFinished() {
	return true;
}

///Not needed
void KillCubeManipulator::End() {

}

///Not needed
void KillCubeManipulator::Interrupted() {

}

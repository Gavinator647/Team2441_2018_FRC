#include "KillDrive.h"

///Requires drive object.
KillDrive::KillDrive()  :
		frc::Command("DrivePastAutoLine") {
	Requires(&Robot::drivetrain);
}



///Needed to stop motors.
void KillDrive::Initialize() {
	Robot::drivetrain.start_left_motors(0);
	Robot::drivetrain.start_right_motors(0);

}

///Not needed.
void KillDrive::Execute() {

}

///Doesn't need to loop.
bool KillDrive::IsFinished() {
	return true;
}

///Not needed.
void KillDrive::End() {

}

///Not needed.
void KillDrive::Interrupted() {

}

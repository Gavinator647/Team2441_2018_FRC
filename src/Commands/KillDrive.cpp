#include "KillDrive.h"

///Requires drive object.
KillDrive::KillDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

///Needed to stop motors.
void KillDrive::Initialize() {

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

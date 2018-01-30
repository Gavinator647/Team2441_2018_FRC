#include "DriveJoystick.h"
///Requires object joystick
DriveJoystick::DriveJoystick() :
		frc::Command("DriveJoystick") {
	Requires(&Robot::drivetrain);
}

//TODO: Figure this out
void DriveJoystick::Initialize() {

}

//TODO: Figure this out
void DriveJoystick::Execute() {

}

//TODO: Figure this out
bool DriveJoystick::IsFinished() {
	return false;
}

//TODO: Figure this out
void DriveJoystick::End() {

}

//TODO: Figure this out
void DriveJoystick::Interrupted() {

}

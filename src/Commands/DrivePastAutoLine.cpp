#include "DrivePastAutoLine.h"
///Needs object drive
DrivePastAutoLine::DrivePastAutoLine() {
	Robot::drivetrain

}

///Starts motors, resets timer, starts timer
void DrivePastAutoLine::Initialize() {

}

///Does not need
void DrivePastAutoLine::Execute() {

}

///checks if timer is past (), if it is past return true or else false
bool DrivePastAutoLine::IsFinished() {
	return true;
}

///Stops the motors
void DrivePastAutoLine::End() {

}

///does not need
void DrivePastAutoLine::Interrupted() {

}

#include "DrivePastAutoLine.h"
#include "Robot.h"
///Needs object drive
DrivePastAutoLine::DrivePastAutoLine() :
		frc::Command("DrivePastAutoLine") {
	Requires(&Robot::drivetrain);

}

///Starts motors, resets timer, starts timer
void DrivePastAutoLine::Initialize() {
	Robot::drivetrain.start_left_motors(DRIVE_SPEED);
	Robot::drivetrain.start_right_motors(DRIVE_SPEED);

	auto_drive_time.Reset();
	auto_drive_time.Start();
}



///checks if timer is past (), if it is past return true or else false
bool DrivePastAutoLine::IsFinished() {
	return auto_drive_time.HasPeriodPassed(DRIVE_TIME);

}

///Stops the motors
void DrivePastAutoLine::End() {
	auto_drive_time.Stop();
	Robot::drivetrain.start_left_motors(DRIVE_STOP);
	Robot::drivetrain.start_right_motors(DRIVE_STOP);

}

void DrivePastAutoLine::Interrupted() {
	auto_drive_time.Stop();
	Robot::drivetrain.start_left_motors(DRIVE_STOP);
	Robot::drivetrain.start_right_motors(DRIVE_STOP);

}

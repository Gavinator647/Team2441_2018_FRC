#include "DriveJoystick.h"
#include "Robot.h"
///Requires object joystick
DriveJoystick::DriveJoystick() :
		frc::Command("DriveJoystick") {
	Requires(&Robot::drivetrain);
}

///Not needed
void DriveJoystick::Initialize() {

}

///Move the robot in response to the joystick
void DriveJoystick::Execute() {
	int left_speed = Robot::oi.GetJoystick().GetRawAxis(1) * 100;
	int right_speed = Robot::oi.GetJoystick().GetRawAxis(4) * 100;
	Robot::drivetrain.start_left_motors(left_speed);
	Robot::drivetrain.start_right_motors(right_speed);

}

///Keep looping until you are done driving the robot
bool DriveJoystick::IsFinished() {
	return false;
}

///Stop robot
void DriveJoystick::End() {
	Robot::drivetrain.start_left_motors(0);
	Robot::drivetrain.start_right_motors(0);

}

///Stop robot
void DriveJoystick::Interrupted() {
	Robot::drivetrain.start_left_motors(0);
	Robot::drivetrain.start_right_motors(0);

}

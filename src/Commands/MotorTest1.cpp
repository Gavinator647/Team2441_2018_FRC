#include "MotorTest1.h"
#include "Robot.h"

MotorTest1::MotorTest1() :
	frc::Command("MotorTest1"){
Requires (&Robot::motor);
}

// Called just before this Command runs the first time
void MotorTest1::Initialize() {

	Robot::motor.start_motor(MOTOR_SPEED);
}

// Called repeatedly when this Command is scheduled to run
void MotorTest1::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool MotorTest1::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void MotorTest1::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MotorTest1::Interrupted() {
	Robot::motor.start_motor(MOTOR_SPEED);
}

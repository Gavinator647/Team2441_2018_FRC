#include "KillMotor.h"
#include "Robot.h"

KillMotor::KillMotor() :
	frc::Command("KillMotor") {
Requires(&Robot::motor);

}

// Called just before this Command runs the first time
void KillMotor::Initialize() {
	Robot::motor.start_motor(0);
}

// Make this return true when this Command no longer needs to run execute()
bool KillMotor::IsFinished() {
	return true;
}

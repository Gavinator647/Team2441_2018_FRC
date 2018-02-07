#include <Commands/KillRampWinch.h>
#include "Robot.h"
///requires object ramp
KillRampWinch::KillRampWinch() :
		frc::Command("KillRampWinch") {
	Requires(&Robot::ramp);
}

///stops winch motors
void KillRampWinch::Initialize() {
	Robot::ramp.stop_winch_motor();
}

///not needed
void KillRampWinch::Execute() {

}

///Stop looping
bool KillRampWinch::IsFinished() {
	return true;
}

///Not needed
void KillRampWinch::End() {

}

///Not needed
void KillRampWinch::Interrupted() {

}

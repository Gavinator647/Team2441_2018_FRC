#include "RaiseRamp.h"
///requires object ramp
RaiseRamp::RaiseRamp() : frc::Command("RaiseRamp") {
	Requires(&Robot::raise);

}

///Starts motors
void RaiseRamp::Initialize() {
	Robot::raise.

}

///Not needed
void RaiseRamp::Execute() {

}

///No need to loop
bool RaiseRamp::IsFinished() {
	return true;
}

///Not needed
void RaiseRamp::End() {

}

///Not needed
void RaiseRamp::Interrupted() {

}

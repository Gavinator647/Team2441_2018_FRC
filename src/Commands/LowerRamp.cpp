#include "LowerRamp.h"

///requires object ramp
LowerRamp::LowerRamp() : frc::Command("LowerRamp") {
	Requires(&Robot::ramp);

}

///Starts moters
void LowerRamp::Initialize() {
	Robot::ramp.start_winch_motor();

}

///Not needed
void LowerRamp::Execute() {

}

///No need to loop
bool LowerRamp::IsFinished() {
	return true;
}

///Kills Winch
void LowerRamp::End() {
	Robot::ramp.stop_winch_motor();

}

///Not needed
void LowerRamp::Interrupted() {
	Robot::ramp.stop_winch_motor();
}

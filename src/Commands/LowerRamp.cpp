#include "LowerRamp.h"
#include "Robot.h"
///requires object ramp
LowerRamp::LowerRamp() :
		frc::Command("LowerRamp") {
	Requires(&Robot::ramp);

}

///Starts moters
void LowerRamp::Initialize() {
	Robot::ramp.start_winch_motor();

	lower_ramp_time.Reset();
	lower_ramp_time.Start();

}

///Not needed
void LowerRamp::Execute() {

}

///No need to loop
bool LowerRamp::IsFinished() {
	return lower_ramp_time.HasPeriodPassed(DRIVE_TIME);
}

///Kills Winch
void LowerRamp::End() {
	Robot::ramp.stop_winch_motor();

}

///Not needed
void LowerRamp::Interrupted() {
	Robot::ramp.stop_winch_motor();
}

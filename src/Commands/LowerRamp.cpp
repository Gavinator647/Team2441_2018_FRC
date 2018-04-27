#include "LowerRamp.h"
#include "Robot.h"
///requires object ramp
LowerRamp::LowerRamp() :
		frc::Command("LowerRamp") {
	Requires(&Robot::ramp);

}

///Starts motors
void LowerRamp::Initialize() {
	Robot::ramp.start_winch_motor();

	lower_ramp_time.Reset();
	lower_ramp_time.Start();

}

///No need to loop
bool LowerRamp::IsFinished() {
	return lower_ramp_time.HasPeriodPassed(DRIVE_TIME);
}

///Kills Winch
void LowerRamp::End() {
	Robot::ramp.stop_winch_motor();

}

///Im high guys
void LowerRamp::Interrupted() {
	Robot::ramp.stop_winch_motor();
}

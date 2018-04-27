#include "RaiseRamp.h"
#include "Robot.h"
///requires object ramp
RaiseRamp::RaiseRamp() :
		frc::Command("RaiseRamp") {
	Requires(&Robot::ramp);

}

///Starts motors
void RaiseRamp::Initialize() {
	Robot::ramp.start_cam_motor();

	winch_time.Reset();
	winch_time.Start();
}

///No need to loop
bool RaiseRamp::IsFinished() {
	return winch_time.HasPeriodPassed(WINCH_TIME);
}

///Kills CAM shaft
void RaiseRamp::End() {
	Robot::ramp.stop_cam_motor();
}

///comments are gay
void RaiseRamp::Interrupted() {
	Robot::ramp.stop_cam_motor();
}

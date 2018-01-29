#include "RaiseRamp.h"
///requires object ramp
RaiseRamp::RaiseRamp() : frc::Command("RaiseRamp") {
	Requires(&Robot::ramp);

}

///Starts motors
void RaiseRamp::Initialize() {
	Robot::ramp.start_cam_motor();

}

///Not needed
void RaiseRamp::Execute() {

}

///No need to loop
bool RaiseRamp::IsFinished() {
	return Robot::ramp.is_ramp_up();
}

///Kills CAM shaft
void RaiseRamp::End() {
	Robot::ramp.stop_cam_motor();
}

///Not needed
void RaiseRamp::Interrupted() {
	Robot::ramp.stop_cam_motor();
}

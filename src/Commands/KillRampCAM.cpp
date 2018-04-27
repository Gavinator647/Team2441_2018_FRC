#include "KillRampCAM.h"
#include "Robot.h"
/// Requires object ramp
KillRampCAM::KillRampCAM() :
		frc::Command("KillRampCAM") {
	Requires(&Robot::ramp);
}

/// stops the motors for the CAM shaft motor
void KillRampCAM::Initialize() {
	Robot::ramp.stop_cam_motor();
}

/// Stops looping
bool KillRampCAM::IsFinished() {
	return true;
}



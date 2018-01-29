#include "KillRampCAM.h"

/// Requires object ramp
KillRampCAM::KillRampCAM() : frc::Command("KillRampCAM") {

}

/// stops the motors for the CAM shaft motor
void KillRampCAM::Initialize() {
	Robot::ramp.stop_cam_motor();
}

/// Not needed
void KillRampCAM::Execute() {

}

/// Stops looping
bool KillRampCAM::IsFinished() {
	return true;
}

/// Not needed
void KillRampCAM::End() {

}

/// Not needed
void KillRampCAM::Interrupted() {

}

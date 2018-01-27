#include "Ramp.h"
#include "../RobotMap.h"

/// Constructor. Nothing happens here.
Ramp::Ramp() :
		Subsystem("ExampleSubsystem") {

}

/// Constructor. Nothing happens here.
void Ramp::InitDefaultCommand() {

}

/// Activates the winch to lower the ramp.
void Ramp::start_winch_motor() {
	down_ramp.Set(WINCH_SPEED);

}
/// Stops the winch
void Ramp::stop_winch_motor() {
	down_ramp.Set(WINCH_STOP);
}

/// Starts the CAM shaft motor to raise ramp.
void Ramp::start_cam_motor() {
	raise_ramp.Set(CAM_SPEED);
}
/// Stops the CAM shaft motor.
void Ramp::stop_cam_motor() {
	raise_ramp.Set(CAM_STOP);
}
/// Checks if CAMs are in the right position. If button is pressed, then the command RaiseRamp is disabled
/// then the command KillRampWinch is activated.
bool Ramp::is_ramp_down() {
	return cam_switch.Get();
}

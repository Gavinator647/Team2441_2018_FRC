#include "Ramp.h"
#include "../RobotMap.h"

/// Constructor. Nothing happens here.
Ramp::Ramp() :
		Subsystem("Ramp") {

}

/// Constructor. Nothing happens here.
void Ramp::InitDefaultCommand() {

}

/// Activates the winch to lower the ramp.
void Ramp::start_winch_motor() {
	down_ramp.Set(WINCH_SPEED);
	wax_on = true;

}
/// Stops the winch
void Ramp::stop_winch_motor() {
	down_ramp.Set(WINCH_STOP);
	wax_on = false;
}

/// Starts the CAM shaft motor to raise ramp.
void Ramp::start_cam_motor() {
	raise_ramp.Set(CAM_SPEED);
	cam_on = true;
}
/// Stops the CAM shaft motor.
void Ramp::stop_cam_motor() {
	raise_ramp.Set(CAM_STOP);
	cam_on = false;
}
/// Checks if CAMs are in the right position. If button is pressed, then the command RaiseRamp is disabled
/// then the command KillRampWinch is activated.
bool Ramp::is_ramp_up() {
	return cam_switch.Get();
}

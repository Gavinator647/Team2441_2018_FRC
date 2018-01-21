#ifndef Ramp_H
#define Ramp_H

#include <Commands/Subsystem.h>
#include <DoubleSolenoid.h>
#include "RobotMap.h"
#include <Spark.h>
#include <Compressor.h>
#include <DigitalInput.h>

class Ramp: public Subsystem {
private:

	/// Motor for the winch to lower ramp.
	frc::Spark down_ramp { RAMP_WINCH_MOTOR };

	/// Motor for the CAM shaft to raise ramp.
	frc::Spark raise_ramp { CAM_SHAFT_MOTOR };

	//TODO: figure out speed.
	/// Speed of winch to lower the ramp.
	constexpr float WINCH_SPEED = 1;

	frc::DigitalInput cam_switch { CAM_SHAFT_SWITCH };
public:
	void start_winch_motor();
	void stop_winch_motor();
	void reverse_winch_motor();
	void start_cam_motor();
	void stop_cam_motor();

	void InitDefaultCommand();
};

#endif  // Ramp_H

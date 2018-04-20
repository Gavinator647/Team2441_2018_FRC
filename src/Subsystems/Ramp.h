#ifndef Ramp_H
#define Ramp_H

#include <Commands/Subsystem.h>
#include <DoubleSolenoid.h>
#include "RobotMap.h"
#include <Spark.h>
#include <Compressor.h>
#include <DigitalInput.h>
#include <PWMSpeedController.h>

class Ramp: public frc::Subsystem {
private:

	/// Motor for the winch to lower ramp.
	frc::Spark down_ramp { RAMP_WINCH_MOTOR };

	/// Motor for the CAM shaft to raise ramp.
	frc::Spark raise_ramp { CAM_SHAFT_MOTOR };

	//TODO: figure out speed.
	/// Speed of winch to lower the ramp.
	static constexpr float WINCH_SPEED = 100.0;

	/// Stops winch motor.
	static constexpr float WINCH_STOP = 0;

	//TODO: figure out speed.
	/// Speed of CAM shaft to 1raise the ramp.
	static constexpr float CAM_SPEED = 0.65;

	/// Stops CAM shaft motor..
	static constexpr float CAM_STOP = 0;

	static constexpr float SLACK_SPEED = -0.75;

	///wax_on -> winch_on, declares variables that stores info on whether the winch are done
	bool wax_on = true;

	///declares variables that stores info on whether the cam are done
	///bool cam_on = true;

	///Tells all kinda stuff about whether the cam is up and stuff and the winch
	///frc::DigitalInput cam_switch { CAM_SHAFT_SWITCH };
public:
	Ramp();
	void start_winch_motor();
	void stop_winch_motor();
	void start_cam_motor();
	void stop_cam_motor();
	///bool is_ramp_up();
	void start_slack_ramp();

	bool get_wax_on();
	bool get_cam_on();

	void InitDefaultCommand();
};

#endif  // Ramp_H

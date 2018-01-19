#ifndef Ramp_H
#define Ramp_H

#include <Commands/Subsystem.h>
#include <DoubleSolenoid.h>
#include "RobotMap.h"
#include <Spark.h>
#include <Compressor.h>

class Ramp: public Subsystem {
private:

	/// Pistons for raising ramp
	frc::DoubleSolenoid up_ramp { RAMP_SOLENOID };

	/// Motor to lower the ramp.
	frc::Spark down_ramp { RAMP_MOTOR_PORT };

	/// Motor to raise the ramp.
	frc::Spark rasie_ramp { RAISE_RAMP_MOTOR };

	frc::Compressor air_tank { AIR_COMPRESSOR };

	//TODO: figure out speed.
	/// Speed of winch to lower the ramp.
	constexpr float WINCH_SPEED = 1;
public:
	void start_winch_motor();
	void stop_winch_motor();
	void piston_engage();
	void piston_disengage();
	void reverse_winch_motor();
	void start_compressor();
	void stop_compressor();
	void start_lift_motor();
	void stop_lift_motor();

	void InitDefaultCommand();
};

#endif  // Ramp_H

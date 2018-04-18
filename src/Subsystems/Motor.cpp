#include "Motor.h"

Motor::Motor() : Subsystem("Motor") {

}

void Motor::InitDefaultCommand() {

}

void Motor::start_motor(int speed) {
	double spark_input_value = speed/100.0;
	motor_one.Set(spark_input_value);
	motor_speed = speed;

}

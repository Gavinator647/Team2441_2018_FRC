/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// TODO: figure this out
/// Motor port connected to left back drive motor spark.
constexpr int LEFT_BACK_DRIVE_PORT = 1;

// TODO: figure this out
/// Motor port connected to left front drive motor spark.
constexpr int LEFT_FRONT_DRIVE_PORT = 1;

// TODO: figure this out
/// Motor port connected to right back drive motor spark.
constexpr int RIGHT_BACK_DRIVE_PORT = 1;

// TODO: figure this out
/// Motor port connected to right front drive motor spark.
constexpr int RIGHT_FRONT_DRIVE_PORT = 1;

// TODO: figure this out
/// Motor port connected to the left fly wheels spark.
constexpr int LEFT_FLY_WHEELS_PORT = 1;

// TODO: figure this out
/// Motor port connected to the right fly wheels spark.
constexpr int RIGHT_FLY_WHEELS_PORT = 1;

// TODO: figure this out
/// Limit switch port connected directly to the brain. Determines whether the cube is
/// in the cube manipulator.
constexpr int CUBE_MANIPULATOR_SWITCH = 1;

//TODO: figure this out
/// Solenoid port connected to the two pistons.
constexpr int RAMP_SOLENOID = 1;

//TODO: figure this out
/// Motor port connected to ramp spark.
constexpr int RAMP_MOTOR_PORT = 1;

//TODO: figure this out
/// Air compressor for the pneumatics
constexpr int AIR_COMPRESSOR = 1;

//TODO: figure this out
/// Motor port connected to the ramp raising motor.
constexpr int RAISE_RAMP_MOTOR = 1;

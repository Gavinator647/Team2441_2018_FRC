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
constexpr int LEFT_BACK_DRIVE_PORT = 2;

// TODO: figure this out
/// Motor port connected to left front drive motor spark.
constexpr int LEFT_FRONT_DRIVE_PORT = 0;

// TODO: figure this out
/// Motor port connected to right back drive motor spark.
constexpr int RIGHT_BACK_DRIVE_PORT = 3;

// TODO: figure this out
/// Motor port connected to right front drive motor spark.
constexpr int RIGHT_FRONT_DRIVE_PORT = 1;

// TODO: figure this out
/// Motor port connected to the left fly wheels spark.
constexpr int LEFT_FLY_WHEELS_PORT = 6;

// TODO: figure this out
/// Motor port connected to the right fly wheels spark.
constexpr int RIGHT_FLY_WHEELS_PORT = 7;

// TODO: figure this out
/// Limit switch port connected directly to the brain. Determines whether the cube is
/// in the cube manipulator.
constexpr int CUBE_MANIPULATOR_SWITCH = 0;

//TODO: figure this out
/// Motor port connected to winch spark.
constexpr int RAMP_WINCH_MOTOR = 4;

//TODO: figure this out
/// Motor port connected to the CAM shaft motor.
constexpr int CAM_SHAFT_MOTOR = 5;

//TODO: figure this out
/// Limit switch port connected directly to the brain. Determines whether the CAM shaft
/// is in the right position
constexpr int CAM_SHAFT_SWITCH = 9;

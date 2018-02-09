/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "Robot.h"
#include <Commands/Scheduler.h>
#include <SmartDashboard/SmartDashboard.h>

DriveTrain Robot::drivetrain;
CubeManipulator Robot::intake;
Ramp Robot::ramp;
OI Robot::oi;

void Robot::RobotInit() {
	frc::SmartDashboard::PutData(&drivetrain);
	frc::SmartDashboard::PutData(&intake);
	frc::SmartDashboard::PutData(&ramp);
}

/**
 * This function is called once each time the robot enters Disabled
 * mode.
 * You can use it to reset any subsystem information you want to clear
 * when
 * the robot is disabled.
 */
void Robot::DisabledInit() {
}

void Robot::DisabledPeriodic() {
	frc::Scheduler::GetInstance()->Run();
	Log();
}

/**
 * This autonomous (along with the chooser code above) shows how to
 * select
 * between different autonomous modes using the dashboard. The sendable
 * chooser code works with the Java SmartDashboard. If you prefer the
 * LabVIEW Dashboard, remove all of the chooser code and uncomment the
 * GetString code to get the auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional commands to
 * the
 * chooser code above (like the commented example) or additional
 * comparisons
 * to the if-else structure below with additional strings & commands.
 */
void Robot::AutonomousInit() {
	m_autonomousCommand = new DrivePastAutoLine();
	m_autonomousCommand->Start();
}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.
	if (m_autonomousCommand != nullptr) {
		m_autonomousCommand->Cancel();
		m_autonomousCommand = nullptr;
	}
}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {
}

void Robot::Log() {
	frc::SmartDashboard::PutBoolean("CAM Shaft Switch", ramp.is_ramp_up());
	frc::SmartDashboard::PutBoolean("Intake Switch", intake.is_cube_in());


}
START_ROBOT_CLASS(Robot)

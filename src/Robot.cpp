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

/// Creates SmartDashboard display windows for diagnostics
void Robot::RobotInit() {
	frc::SmartDashboard::PutData(&drivetrain);
	frc::SmartDashboard::PutData(&intake);
	frc::SmartDashboard::PutData(&ramp);

}



///enables logging
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
///initialization for the Autonomous control that repeats after a certain amount of tiem
void Robot::AutonomousInit() {

	m_autonomousCommand = new DrivePastAutoLine();
	m_autonomousCommand->Start();
}

///Autonomous control that repeats after a certain amount of tiem
void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

///Initialization for user control that repeats after a certain amount of time
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
///User control that repeats after a certain amount of time
void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}
///there is no test code
void Robot::TestPeriodic() {
}

///Gets and projects diagnostics on SmartDashboard display windows
void Robot::Log() {
	///frc::SmartDashboard::PutBoolean("CAM Shaft Switch", ramp.is_ramp_up());
	frc::SmartDashboard::PutBoolean("Intake Switch", intake.is_cube_in());
	frc::SmartDashboard::PutBoolean("Wax on", ramp.get_wax_on());
	///frc::SmartDashboard::PutBoolean("Cam on", ramp.get_cam_on());
	frc::SmartDashboard::PutNumber("Right drive speed", drivetrain.get_right_drive_speed());
	frc::SmartDashboard::PutNumber("Left drive speed", drivetrain.get_left_drive_speed());
	frc::SmartDashboard::PutNumber("Get left flywheels speed", intake.get_left_fly_wheels_speed());
	frc::SmartDashboard::PutNumber("Get right flywheels speed", intake.get_right_fly_wheels_speed());

}
START_ROBOT_CLASS(Robot)

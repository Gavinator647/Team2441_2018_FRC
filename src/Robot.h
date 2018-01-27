#pragma once

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <TimedRobot.h>
#include "Subsystems/CubeManipulator.h"
#include "Subsystems/Ramp.h"
#include "Subsystems/DriveTrain.h"
#include "OI.h"

class Robot: public frc::TimedRobot {
public:
	static DriveTrain drivetrain;
	static Ramp ramp;
	static CubeManipulator intake;
	static OI oi;

private:
	frc::Command* m_autonomousCommand = nullptr;

	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;

};


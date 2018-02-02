#pragma once


#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <IterativeRobot.h>

#include "Commands/DrivePastAutoLine.h"

#include "OI.h"

#include "Subsystems/CubeManipulator.h"
#include "Subsystems/DriveTrain.h"
#include "Subsystems/Ramp.h"



class Robot: public frc::IterativeRobot {
public:
	static DriveTrain drivetrain;
	static CubeManipulator intake;
	static Ramp ramp;
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


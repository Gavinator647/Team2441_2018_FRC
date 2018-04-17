#pragma once


#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <IterativeRobot.h>
<<<<<<< HEAD
=======

#include "Commands/AutonomousPhase.h"


>>>>>>> parent of 9d7a05a... Updated and tweaked code
#include "OI.h"
#include "Subsystems/Motor.h"

class Robot: public frc::IterativeRobot {
public:

	static Motor motor;
	static OI oi;

private:
	frc::Command* m_autonomousCommand = nullptr;

	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
	void DisabledPeriodic() override;

	void Log();
};


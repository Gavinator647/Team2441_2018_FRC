#ifndef CubeOut_H
#define CubeOut_H

#include "Subsystems/CubeManipulator.h"
#include "Robot.cpp"
#include <Commands/Command.h>

class CubeOut: public frc::Command {

private:
	static constexpr int FLYWHEEL_SPEED = 1;

public:
	CubeOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // CubeOut_H

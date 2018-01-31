#ifndef KillCubeManipulator_H
#define KillCubeManipulator_H

#include <Commands/Command.h>
#include "Subsystems/CubeManipulator.h"
#include "Robot.h"

class KillCubeManipulator : public frc::Command {

public:
	KillCubeManipulator();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // KillCubeManipulator_H

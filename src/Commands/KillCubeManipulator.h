#ifndef KillCubeManipulator_H
#define KillCubeManipulator_H

#include <Commands/Command.h>
#include "Subsystems/CubeManipulator.h"

class KillCubeManipulator : public frc::Command {

public:
	KillCubeManipulator();
	void Initialize() override;
	bool IsFinished() override;
};

#endif  // KillCubeManipulator_H

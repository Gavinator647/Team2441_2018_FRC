#ifndef KillCubeManipulator_H
#define KillCubeManipulator_H

#include <Commands/Command.h>

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

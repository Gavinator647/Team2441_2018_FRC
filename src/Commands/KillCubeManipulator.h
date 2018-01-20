#ifndef KillCubeManipulator_H
#define KillCubeManipulator_H

#include "../CommandBase.h"

class KillCubeManipulator : public CommandBase {
public:
	KillCubeManipulator();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // KillCubeManipulator_H

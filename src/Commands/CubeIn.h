#ifndef CubeIn_H
#define CubeIn_H

#include "Subsystems/CubeManipulator.h"
#include <Commands/Command.h>

class CubeIn: public frc::Command {

private:
	static constexpr int FLYWHEEL_SPEED = 1;

public:
	CubeIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // CubeIn_H

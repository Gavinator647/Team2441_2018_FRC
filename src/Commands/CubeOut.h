#ifndef CubeOut_H
#define CubeOut_H

#include "Subsystems/CubeManipulator.h"
#include <Commands/Command.h>

class CubeOut: public frc::Command {

private:
	static constexpr float FLYWHEEL_SPEED = 75.0;

public:
	CubeOut();
	void Initialize() override;
	bool IsFinished() override;
	void Interrupted() override;
};

#endif  // CubeOut_H

#ifndef CubeIn_H
#define CubeIn_H

#include "Subsystems/CubeManipulator.h"
#include <Commands/Command.h>

class CubeIn: public frc::Command {

private:
	static constexpr float FLYWHEEL_SPEED = -75.0;

public:
	CubeIn();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // CubeIn_H

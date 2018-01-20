#ifndef CubeOut_H
#define CubeOut_H

#include "../CommandBase.h"

class CubeOut: public CommandBase {

private:
	constexpr float FLYWHEEL_SPEED = 1;

public:
	CubeOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // CubeOut_H

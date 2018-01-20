#ifndef CubeIn_H
#define CubeIn_H

#include "../CommandBase.h"

class CubeIn: public CommandBase {
private:
	constexpr float FLYWHEEL_SPEED = 1;
public:
	CubeIn();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // CubeIn_H

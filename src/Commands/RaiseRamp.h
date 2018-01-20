#ifndef RaiseRamp_H
#define RaiseRamp_H

#include "../CommandBase.h"

class RaiseRamp: public CommandBase {
private:
	constexpr float RAISE_RAMP_TIME = 1
public:
	RaiseRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // RaiseRamp_H

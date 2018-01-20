#ifndef LowerRamp_H
#define LowerRamp_H

#include "../CommandBase.h"

class LowerRamp: public CommandBase {
private:
	constexpr float LOWER_RAMP_TIME = 1
public:
	LowerRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // LowerRamp_H

#ifndef killRamp_H
#define killRamp_H

#include "../CommandBase.h"

class killRamp : public CommandBase {
public:
	killRamp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // killRamp_H

#ifndef MotorTest2_H
#define MotorTest2_H

#include "../CommandBase.h"

class MotorTest2 : public CommandBase {
public:
	MotorTest2();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // MotorTest2_H

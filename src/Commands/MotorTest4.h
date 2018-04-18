#ifndef MotorTest4_H
#define MotorTest4_H

#include "../CommandBase.h"

class MotorTest4 : public CommandBase {
public:
	MotorTest4();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // MotorTest4_H

#ifndef MotorTest3_H
#define MotorTest3_H

#include "../CommandBase.h"

class MotorTest3 : public CommandBase {
public:
	MotorTest3();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // MotorTest3_H

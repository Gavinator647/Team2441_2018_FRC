#ifndef DrivePastAutoLine_H
#define DrivePastAutoLine_H

#include "../CommandBase.h"

class DrivePastAutoLine: public CommandBase {
private:
	constexpr float DRIVE_SPEED = 1;
	constexpr float DRIVE_TIME = 1;
public:
	DrivePastAutoLine();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DrivePastAutoLine_H

#ifndef DrivePastAutoLine_H
#define DrivePastAutoLine_H

#include <Commands/Command.h>

class DrivePastAutoLine: public frc::Command {
private:
	static constexpr float DRIVE_SPEED = 1;
	static constexpr float DRIVE_TIME = 1;
public:
	DrivePastAutoLine();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DrivePastAutoLine_H

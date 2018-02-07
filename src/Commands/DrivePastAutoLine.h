#ifndef DrivePastAutoLine_H
#define DrivePastAutoLine_H

#include <Commands/Command.h>
#include <Timer.h>

class DrivePastAutoLine: public frc::Command {
private:
	static constexpr float DRIVE_SPEED = 1;
	static constexpr float DRIVE_STOP = 0;

	///Time in seconds
	static constexpr float DRIVE_TIME = 1;
	frc::Timer auto_drive_time;

public:
	DrivePastAutoLine();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DrivePastAutoLine_H

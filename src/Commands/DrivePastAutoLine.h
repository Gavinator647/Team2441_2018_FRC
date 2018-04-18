#ifndef DrivePastAutoLine_H
#define DrivePastAutoLine_H

#include <Commands/Command.h>
#include <Timer.h>

class DrivePastAutoLine: public frc::Command {
private:
	static constexpr int DRIVE_SPEED = 45;
	static constexpr int DRIVE_STOP = 0;

	///Time in seconds
	static constexpr float DRIVE_TIME = 6.5;
	frc::Timer auto_drive_time;

public:
	DrivePastAutoLine();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;

};

#endif  // DrivePastAutoLine_H

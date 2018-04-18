#ifndef LowerRamp_H
#define LowerRamp_H

#include <Commands/Command.h>
#include "Subsystems/Ramp.h"
#include <Timer.h>

class LowerRamp: public frc::Command {
private:
<<<<<<< HEAD
	static constexpr float DRIVE_TIME = 0.75;
=======
	static constexpr float DRIVE_TIME = 0.5;
>>>>>>> a587c99ecd8c2afe6db061163d1007f81dfc3b49
	frc::Timer lower_ramp_time;
public:
	LowerRamp();
	void Initialize() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // LowerRamp_H

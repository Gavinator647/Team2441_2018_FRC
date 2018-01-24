#ifndef KillDrive_H
#define KillDrive_H

#include <Commands/Command.h>

class KillDrive: public frc::Command {

public:
	KillDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // KillDrive_H

#ifndef KillDrive_H
#define KillDrive_H

#include "../CommandBase.h"

class KillDrive: public CommandBase {

public:
	KillDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // KillDrive_H

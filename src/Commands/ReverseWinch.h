#ifndef ReverseWinch_H
#define ReverseWinch_H

#include "../CommandBase.h"

class ReverseWinch: public CommandBase {
private:
	constexpr float REVERSE_WINCH_TIME = 1
public:
	ReverseWinch();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ReverseWinch_H

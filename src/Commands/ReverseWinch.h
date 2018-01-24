#ifndef ReverseWinch_H
#define ReverseWinch_H

#include <Commands/Command.h>

class ReverseWinch: public frc::Command {
private:
	static constexpr float REVERSE_WINCH_TIME = 1;
public:
	ReverseWinch();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ReverseWinch_H

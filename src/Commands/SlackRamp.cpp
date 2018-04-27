#include "SlackRamp.h"
#include "Robot.h"
///requires object ramp
SlackRamp::SlackRamp() :
		frc::Command("SlackRamp") {
	Requires(&Robot::ramp);

}

///Starts motors
void SlackRamp::Initialize() {
	Robot::ramp.start_slack_ramp();

	slack_ramp_time.Reset();
	slack_ramp_time.Start();

}

///No need to loop
bool SlackRamp::IsFinished() {
	return slack_ramp_time.HasPeriodPassed(SLACK_TIME);
}

///Kills Winch
void SlackRamp::End() {
	Robot::ramp.stop_winch_motor();

}

///Im high guys
void SlackRamp::Interrupted() {
	Robot::ramp.stop_winch_motor();
}

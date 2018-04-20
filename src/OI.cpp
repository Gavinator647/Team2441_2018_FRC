/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

OI::OI() {
	///back_start.WhenActive(new RaiseRamp());
	lb.WhenPressed(new CubeOut());
	lb.WhenReleased(new KillCubeManipulator());
	rb.WhenPressed(new CubeIn());
	rb.WhenReleased(new KillCubeManipulator());
	y.WhenPressed(new LowerRamp());
	y.WhenReleased(new KillRampWinch());
	a.WhenPressed(new RaiseRamp());
	a.WhenReleased(new KillRampCAM());
	b.WhenPressed(new SlackRamp());
	b.WhenReleased(new KillRampCAM());

	///y_b.WhenActive(new LowerRamp);
//	x.WhenPressed(new DrivePastAutoLine());

}
frc::Joystick& OI::GetJoystick() {
	return m_joystick;
}

/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

OI::OI() {
	x.WhenPressed(new RaiseRamp());
	lt.WhenPressed(new CubeOut());
	lt.WhenReleased(new KillCubeManipulator());
	rt.WhenPressed(new CubeIn());
	rt.WhenReleased(new KillCubeManipulator());
	y_lb.WhenActive(new LowerRamp);


}

frc::Joystick& OI::GetJoystick() {
	return m_joystick;
}

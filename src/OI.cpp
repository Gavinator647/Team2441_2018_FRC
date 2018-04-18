/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

OI::OI() {
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	///back_start.WhenActive(new RaiseRamp());
=======
<<<<<<< HEAD
	a.WhenPressed(new MotorTest1());
	a.WhenReleased(new KillMotor());
=======
	x.WhenPressed(new RaiseRamp());
>>>>>>> a587c99ecd8c2afe6db061163d1007f81dfc3b49
=======
	back_start.WhenActive(new RaiseRamp());
>>>>>>> parent of 4c7b3bd... Competition Day Changes
=======
	back_start.WhenActive(new RaiseRamp());
>>>>>>> parent of 4c7b3bd... Competition Day Changes
=======
	back_start.WhenActive(new RaiseRamp());
>>>>>>> parent of 4c7b3bd... Competition Day Changes
	lb.WhenPressed(new CubeOut());
	lb.WhenReleased(new KillCubeManipulator());
	rb.WhenPressed(new CubeIn());
	rb.WhenReleased(new KillCubeManipulator());
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	y.WhenPressed(new LowerRamp());
	y.WhenReleased(new KillRampWinch());
	a.WhenPressed(new RaiseRamp());
	a.WhenReleased(new KillRampCAM());
	b.WhenPressed(new SlackRamp());
	b.WhenReleased(new KillRampCAM());

	///y_b.WhenActive(new LowerRamp);
=======
	y_b.WhenPressed(new LowerRamp);
>>>>>>> a587c99ecd8c2afe6db061163d1007f81dfc3b49
=======
	y_b.WhenActive(new LowerRamp);
>>>>>>> parent of 4c7b3bd... Competition Day Changes
=======
	y_b.WhenActive(new LowerRamp);
>>>>>>> parent of 4c7b3bd... Competition Day Changes
=======
	y_b.WhenActive(new LowerRamp);
>>>>>>> parent of 4c7b3bd... Competition Day Changes
//	x.WhenPressed(new DrivePastAutoLine());
>>>>>>> parent of 9d7a05a... Updated and tweaked code

}

frc::Joystick& OI::GetJoystick() {
	return m_joystick;
}

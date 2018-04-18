/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

<<<<<<< HEAD
#include "Commands/CubeIn.h"
#include "Commands/CubeOut.h"
#include "Commands/LowerRamp.h"
#include "Commands/KillCubeManipulator.h"
#include "Commands/RaiseRamp.h"
<<<<<<< HEAD
#include "Commands/KillRampWinch.h"
#include "Commands/KillRampCam.h"
#include "Commands/SlackRamp.h"
=======
#include "Commands/MotorTest1.h"
#include "Commands/KillMotor.h"
>>>>>>> a587c99ecd8c2afe6db061163d1007f81dfc3b49
=======
>>>>>>> parent of 4c7b3bd... Competition Day Changes
#include <Joystick.h>
#include <Buttons/JoystickButton.h>
#include "Triggers/DoubleButton.h"



class OI {
public:
	OI();
	frc::Joystick& GetJoystick();

private:
	frc:: Joystick m_joystick{0};
<<<<<<< HEAD
	frc::JoystickButton a{&m_joystick, 3};
=======

	frc::JoystickButton x{&m_joystick, 3};
	frc::JoystickButton lb{&m_joystick, 5};
	frc::JoystickButton rb{&m_joystick, 6};

<<<<<<< HEAD
<<<<<<< HEAD
	///DoubleButton y_b{&m_joystick, 2,4};
	///DoubleButton back_start{&m_joystick, 7,8};
=======

	frc::JoystickButton y_b{&m_joystick, 4};
>>>>>>> parent of 9d7a05a... Updated and tweaked code
>>>>>>> a587c99ecd8c2afe6db061163d1007f81dfc3b49
=======

	DoubleButton y_b{&m_joystick, 2,4};
	DoubleButton back_start{&m_joystick, 7,8};
>>>>>>> parent of 4c7b3bd... Competition Day Changes
};

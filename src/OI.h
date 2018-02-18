/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "Commands/CubeIn.h"
#include "Commands/CubeOut.h"
#include "Commands/LowerRamp.h"
#include "Commands/KillCubeManipulator.h"
#include "Commands/RaiseRamp.h"
#include <Joystick.h>
#include <Buttons/JoystickButton.h>
#include "Triggers/DoubleButton.h"



class OI {
public:
	OI();
	frc::Joystick& GetJoystick();

private:
	frc:: Joystick m_joystick{0};

	frc::JoystickButton x{&m_joystick, 3};
	frc::JoystickButton lb{&m_joystick, 5};
	frc::JoystickButton rb{&m_joystick, 6};


	frc::JoystickButton y_b{&m_joystick, 4};
};

/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "Commands/MotorTest1.h"
#include "Commands/KillMotor.h"
#include <Joystick.h>
#include <Buttons/JoystickButton.h>
#include "Triggers/DoubleButton.h"



class OI {
public:
	OI();
	frc::Joystick& GetJoystick();

private:
	frc:: Joystick m_joystick{0};
	frc::JoystickButton a{&m_joystick, 3};
};

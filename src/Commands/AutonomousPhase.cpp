/*
 * AutonomusPhase.cpp
 *
 *  Created on: Feb 18, 2018
 *      Author: Gavin Ng
 */

#include <Commands/AutonomousPhase.h>
#include "Commands/CubeIn.h"
#include "Commands/DrivePastAutoLine.h"
#include "Robot.h"
#include "Commands/KillCubeManipulator.h"

AutonomousPhase::AutonomousPhase() {
	AddSequential (new CubeIn());
	AddSequential (new DrivePastAutoLine() );
	AddSequential (new KillCubeManipulator());
}

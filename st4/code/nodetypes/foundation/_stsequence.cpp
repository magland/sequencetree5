//Note: the real source code for stsequence.cpp is found in src/framework
//This file is here for a technical placeholder.
//Do not edit this file

ST_CLASS(STSequence,STLoop)
	
ST_PARAMETER(STVector3, FOV, (200,200,50),mm)
ST_PARAMETER(STReal, maxamp, 20,uT/mm)
ST_PARAMETER(STReal, ramprate, 0.1,[uT/mm]/us)
ST_PARAMETER(STReal, gamma, 42.5764,Hz/uT)
ST_PARAMETER(STVector3, FOV_shift, (0,0,0),mm)
ST_PARAMETER(STVector3, phase_shift, 0, degrees)
ST_PARAMETER(STVector3, FOV_shift_offset, (0,0,0),mm; used internally)
	

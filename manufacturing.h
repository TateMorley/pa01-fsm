//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : manufacturing.h
//---------------------------------------------------------

#ifndef manufacturing_h
#define manufacturing_h

#include "state.h"

state_t* chargeClient();
state_t* manufactureCompletedHandler();
state_t* manufactureFailedHandler();

void entryToManufacturing();
void exitFromManufacturing();
void dispatchFactoryLines();
void shutDownFactoryLines();

#endif

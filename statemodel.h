//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : statemodel.h
//---------------------------------------------------------

#ifndef statemodel_h
#define statemodel_h

#include <stdlib.h>
#include "system.h"
#include "state.h"

extern state_t accepting;
extern state_t processing;
extern state_t manufacturing;
extern state_t shipping;
extern int attempts;

void handleEvent(event current_event);
void printStateName(void);

#endif

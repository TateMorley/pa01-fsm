//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
// 
// Author : FSM-PA_Team01
//
// File Name : closed.c
//---------------------------------------------------------

#include "statemodel.h"
#include "system.h"
#include "manufacturing.h"

extern state_t* default_event_handler();
extern void     default_action();

state_t manufacturing = {
    default_event_handler,
    default_event_handler,
    default_event_handler,
    default_event_handler,
    updateStats,
    chargeClient,
    default_event_handler,
    default_event_handler,
    entryToManufacturing,
    exitFromManufacturing
};

state_t* chargeClient()
{
    return &shipping;
}

void entryToManufacturing()
{
    dispatchFactoryLines();
}

void exitFromManufacturing()
{
    shutDownFactoryLines();
}

void dispatchFactoryLines()
{
    // Implement this
}

void shutDownFactoryLines()
{
    // Implement this
}
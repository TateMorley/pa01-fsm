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
#include <stdio.h>

extern state_t *default_event_handler();
extern void default_action();

state_t* manufactureCompletedHandler();
state_t* manufactureFailedHandler();
void dispatchFactoryLines();
void shutDownFactoryLines();

state_t manufacturing = {
    default_action,         // getOrderSize
    default_event_handler,  // resetAttempts
    default_event_handler,  // increaseAttempts
    default_event_handler,  // paymentRejected
    default_event_handler,  // updateStats
    chargeClient,           // chargeClient
    default_event_handler,  // startWarranty
    default_event_handler,  // refund
    entryToManufacturing,
    exitFromManufacturing
};

state_t *chargeClient()
{
  return &shipping;
}

state_t *manufactureCompletedHandler()
{
  puts("Manufacturing Completed");
  updateStats(DONE);
  return &shipping;
}

state_t *manufactureFailedHandler()
{
  puts("Manufacturing Failed");
  updateStats(FAILED);
  return &accepting;
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
  puts("Dispatching factory lines");
}

void shutDownFactoryLines()
{
  puts("Shutting down factory lines");
}

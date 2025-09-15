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
#include "accepting.h"
#include "stdio.h"

extern state_t *default_event_handler();
extern void default_action();
extern int attempts;

state_t accepting = {

    resetAttempts,          // resetAttempts;
    default_event_handler,  // increaseAttempts;
    default_event_handler,  // increaseAttempts;
    default_event_handler,  // paymentRejected;
    default_event_handler,  // updateStats;
    default_event_handler,  // chargeClient;
    default_event_handler,  // startWarranty;
    default_event_handler,  // refund;
    getOrderSize,           // entry_to;
    default_action          // exit_from;
};

void getOrderSize()
{
  puts("Getting order size = 0 items");

}

state_t* resetAttempts()
{
  attempts = 0;
  return &processing;
}


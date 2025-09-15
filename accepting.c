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

    getOrderSize,           // getOrderSize;
    resetAttempts,          // resetAttempts;
    default_event_handler,  // validPayment;
    default_event_handler,  // increaseAttempts;
    default_event_handler,  // paymentRejected;
    default_event_handler,  // updateStats;
    default_event_handler,  // chargeClient;
    default_event_handler,  // startWarranty;
    default_event_handler,  // refund;
    default_action,         // entry_to;
    default_action          // exit_from;
};

void getOrderSize()
{
  puts("Got an order of size = 0 items");

}

state_t* resetAttempts()
{
  puts("Got an order of size = 0 items");
  attempts = 0;
  puts("Invalid Payment-Attempts Reset to 0");
  return &processing;
}


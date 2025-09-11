//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : closed.c
//---------------------------------------------------------

#include "state.h"
#include "system.h"
#include "accepting.h"


extern state_t *  default_event_handler();
extern void       default_action();

state_t accepting = {
    getOrderSize,           //getOrderSize;
    resetAttempts,  //resetAttempts;
    default_event_handler,  //increaseAttempts;
    default_event_handler,  //paymentRejected;
    default_event_handler,  //updateStats;
    default_event_handler,  //chargeClient;
    default_event_handler,  //startWarranty;
    default_event_handler,  //refund;
    default_action,         //entry_to;
    default_action          //exit_from;
};

state_t* getOrderSize()
{
    // Implement this
}

state_t* resetAttempts()
{
    // Implement this
}

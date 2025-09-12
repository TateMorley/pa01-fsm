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
#include "shipping.h"

extern state_t *  default_event_handler();
extern void       default_action();

state_t shipping = {
    default_event_handler,  //getOrderSize;
    default_event_handler,  //resetAttempts;
    default_event_handler,  //increaseAttempts;
    default_event_handler,  //paymentRejected;
    updateStats,           //updateStats;
    default_event_handler,  //chargeClient;
    startWarranty,          //startWarranty;
    refund,                 //refund;
    entryToShipping,        //entry_to;
    default_action          //exit_from;
};

state_t* refund()
{
    updateStats(LOST);
    return &accepting;
}

state_t* startWarranty()
{
    updateStats(DONE);
    return &accepting;
}

void entryToShipping()
{
    getAddress();
}

void getAddress()
{
    // Implement this
}
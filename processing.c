//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : closed.c
//---------------------------------------------------------

#include "system.h"
#include "processing.h"
#include "statemodel.h"
#include <stdio.h>

extern state_t accepting;
extern state_t manufacturing;
extern state_t *  default_event_handler();
extern void       default_action();

state_t processing = {
    default_action,         //getOrderSize;
    default_event_handler,  //resetAttempts;
    increaseAttempts,       //increaseAttempts;
    paymentRejected,        //paymentRejected;
    default_event_handler,  //updateStats;
    default_event_handler,  //chargeClient;
    default_event_handler,  //startWarranty;
    default_event_handler,  //refund;
    entryToProcessing,      //entry_to;
    default_action          //exit_from;
};

state_t* increaseAttempts()
{
    attempts++;
    return &processing;
}

state_t* paymentRejected()
{
    return &accepting;
}

void entryToProcessing()
{
    getPymntMethod();
}

void getPymntMethod()
{
    puts("Getting payment method");
}

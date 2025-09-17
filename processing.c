//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : processing.c
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
    validPayment,           //validPayment;
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
    printf("Invalid Payment-Attempts Incremented to %d\n", attempts);
    if (attempts >= 3)
    {
        puts("Payment Rejected");
        return &accepting;
    } else {
        return &processing;
    }
}

state_t* validPayment()
{
    return &manufacturing;
}

state_t* paymentRejected()
{
    puts("Payment Rejected");
    return &accepting;
}

void entryToProcessing()
{
    getPymntMethod();
}

void getPymntMethod()
{
    puts("Getting Payment Method");
}

//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : processing.h
//---------------------------------------------------------

#ifndef processing_h
#define processing_h

#include "state.h"

state_t* validPayment();
state_t* increaseAttempts();
state_t* paymentRejected();

void entryToProcessing();
void getPymntMethod();

#endif

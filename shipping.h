//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
// 
// Author : FSM-PA_Team01
//
// File Name : closed.c
//---------------------------------------------------------

#ifndef shipping_h
#define shipping_h

#include "state.h"

state_t* refund();
state_t* startWarranty();

void entryToShipping();

void getAddress();

#endif

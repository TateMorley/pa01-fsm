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

static void updateStats();
static state_t* refund();
static state_t* startWarranty();

static void entryToShipping();

#endif
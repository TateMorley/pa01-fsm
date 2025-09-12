//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
// 
// Author : FSM-PA_Team01
//
// File Name : closed.c
//---------------------------------------------------------

#ifndef manufacturing_h
#define manufacturing_h

#include "state.h"

static void updateStats();
static state_t* chargeClient();

static void entryToManufacturing();
static void exitFromManufacturing();

#endif
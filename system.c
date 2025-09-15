//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : closed.c
//---------------------------------------------------------

#include "system.h"
#include <stdio.h>

void updateStats(status_option status)
{
    printf("Updating Statistics for ");
    if (status == FAILED)
    {
        printf("FAILED manufacturing\n");
    }
    else if (status == DONE)
    {
        printf("SUCCESSFUL orders\n");
    }
    else if (status == LOST)
    {
        printf("LOST packages\n");
    }
}

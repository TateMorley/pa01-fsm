//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : closed.c
//---------------------------------------------------------
#ifndef system_h
#define system_h

// Status settings
typedef enum
{
    FAILED,
    LOST,
    DONE
} status_option;

void set_status(status_option status);

#endif

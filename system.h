//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : system.h
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

// Events
typedef enum
{
    ORDER_RECEIVED,
    INVALID_PAYMENT,
    VALID_PAYMENT,
    MANUFACTURE_FAILED,
    MANUFACTURE_COMPLETED,
    SHIPMENT_LOST,
    SHIPMENT_ARRIVED
} event;
#define INVALID_EVENT -1

void updateStats(status_option status);


#endif

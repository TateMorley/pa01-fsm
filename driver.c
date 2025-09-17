//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : driver.c
//---------------------------------------------------------

#include <stdio.h>
#include "statemodel.h"
#include "system.h"
#include "shipping.h"

state_t* currentState = &accepting;

int main(void)
{
  event currentEvent;
  int key;
  printStateName();

  while ((key = getchar()) != 'X')
  {
    if (key == '\n')
      continue;
    currentEvent = INVALID_EVENT;
    switch (key)
    {
      case 'O':
        currentEvent = ORDER_RECEIVED;
        puts("Event: ORDER_RECEIVED");
        break;
      case 'I':
        currentEvent = INVALID_PAYMENT;
        puts("Event: INVALID_PAYMENT");
        break;
      case 'V':
        currentEvent = VALID_PAYMENT;
        puts("Event: VALID_PAYMENT");
        break;
      case 'F':
        currentEvent = MANUFACTURE_FAILED;
        puts("Event: MANUFACTURE_FAILED");
        break;
      case 'C':
        currentEvent = MANUFACTURE_COMPLETED;
        puts("Event: MANUFACTURE_COMPLETED");
        break;
      case 'L':
        currentEvent = SHIPMENT_LOST;
        puts("Event: SHIPMENT_LOST");
        break;
      case 'R':
        currentEvent = SHIPMENT_ARRIVED;
        puts("Event: SHIPMENT_ARRIVED");
        break;
      default:
        puts("Invalid Event\n");
        break;
    }
    if (currentEvent != INVALID_EVENT)
    {
      handleEvent(currentEvent);
    }
  }
  printf("\n");
  return 0;
}

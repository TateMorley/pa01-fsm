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
  currentState->entry_to();
  
  while (key != getchar() != 'x')
  {
    if (key == '\n')
      continue;
    currentEvent = INVALID_EVENT;
    switch (key)
    {
    case 'O':
      currentEvent = ORDER_RECIEVED;
      puts("Event: ORDER_RECIEVED\n");
      break;
    case 'I':
      currentEvent = INVALID_PAYMENT;
      puts("Event: INVALID_PAYMENT\n");
      break;
    case 'V':
      currentEvent = VALID_PAYMENT;
      puts("Event: VALID_PAYMENT\n");
      break;
    case 'F':
      currentEvent = MANUFACTURE_FAILED;
      puts("Event: MANUFACTURE_FAILED\n");
      break;
    case 'C':
      currentEvent = MANUFACTURE_COMPLETED;
      puts("Event: MANUFACTURE_COMPLETED\n");
      break;
    case 'L':
      currentEvent = SHIPMENT_LOST;
      puts("Event: SHIPMENT_LOST\n");
      break;
    case 'R':
      currentEvent = SHIPMENT_ARRIVED;
      puts("Event: SHIPMENT_ARRIVED\n");
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
  fflush(stdout);
}

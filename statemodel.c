#include <stdlib.h>
#include <stdio.h>

#include "statemodel.h"

extern state_t *currentState;
int attempts = 0;

void handleEvent(event currentEvent)
{
  state_t *next_state;

  next_state = NULL;
  switch (currentEvent)
  {
  case ORDER_RECEIVED:
    next_state = currentState->resetAttempts();
    break;
  case INVALID_PAYMENT:
    if (attempts < 3)
    {
      next_state = currentState->increaseAttempts();
    }
    else if (attempts >= 3)
    {
      next_state = currentState->paymentRejected();
    }

    break;
  case VALID_PAYMENT:
    next_state = &manufacturing;
    break;
  case MANUFACTURE_FAILED:
    updateStats(FAILED);
    next_state = &accepting;
    break;
  case MANUFACTURE_COMPLETED:
    next_state = currentState->chargeClient();
    break;
  case SHIPMENT_LOST:
    next_state = currentState->refund();
    break;
  case SHIPMENT_ARRIVED:
    next_state = currentState->startWarranty();
    break;
  }

  if (next_state != NULL)
  {
    currentState = next_state;
    printStateName();
    currentState->entry_to();
  }
}

void printStateName(void)
{
  printf("\n*-*-*-*-*-*-*-*-*-*-*-*\n State: ");
  if (currentState == &accepting)
    printf("ACCEPTING");
  else if (currentState == &processing)
    printf("PROCESSING");
  else if (currentState == &manufacturing)
    printf("MANUFACTURING");
  else if (currentState == &shipping)
    printf("SHIPPING");
  printf("\n*-*-*-*-*-*-*-*-*-*-*-*\n");
}

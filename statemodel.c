#include <stdlib.h>
#include <stdio.h>

#include "statemodel.h"

extern state_t *currentState;
int attempts = 0;

void handleEvent(event currentEvent)
{
  state_t *next_state;
  event event_copy = currentEvent;

  next_state = NULL;
  switch (currentEvent)
  {
  case ORDER_RECEIVED:
    next_state = currentState->resetAttempts();
    break;
  case INVALID_PAYMENT:
    next_state = currentState->increaseAttempts();
    break;
  case VALID_PAYMENT:
    next_state = currentState->validPayment();
    break;
  case MANUFACTURE_FAILED:
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
    if (next_state != currentState)
    {
      currentState->exit_from();
    }
    if (event_copy == MANUFACTURE_FAILED)
    {
      updateStats(FAILED);
    }
    if (event_copy == MANUFACTURE_COMPLETED)
    {
      puts("Client has been charged");
    }
    currentState = next_state;
    printStateName();
    currentState->entry_to();
  }
}

void printStateName(void)
{
  printf("\n*-*-*-*-*-*-*-*-*-*-*-*\nState: ");
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

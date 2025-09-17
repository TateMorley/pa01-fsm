//---------------------------------------------------------
// Assignment : Lab-02 Opening Source
// Date : 9/10/25
//
// Author : FSM-PA_Team01
//
// File Name : state.h
//---------------------------------------------------------

#ifndef state_h
#define state_h

typedef struct state state_t ;

typedef state_t* event_handler(void);

typedef void action(void);

struct state {
  action*         getOrderSize;
  event_handler*  resetAttempts;
  event_handler*  validPayment;
  event_handler*  increaseAttempts;
  event_handler*  paymentRejected;
  event_handler*  updateStats;
  event_handler*  chargeClient;
  event_handler*  startWarranty;
  event_handler*  refund;
  action*         entry_to;
  action*         exit_from;
};

#endif

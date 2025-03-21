#ifndef FSM_H_
#define FSM_H_
#include <stdbool.h>
#include <stdio.h>
#include "FSM.h"

typedef enum
{
    E_STATE_INIT,
    E_STATE_STANDBY,
    E_STATE_RUN,
    E_STATE_FAULT,
    E_STATE_COUNT
} E_STATE;

typedef enum
{
    E_EVENT_INIT_DONE,
    E_EVENT_READY_DONE,
    E_EVENT_FAULT_DETECTED,
    E_EVENT_FAULT_CLEAR,
    E_EVENT_COUNT
} E_EVENT;

typedef E_STATE (*StateTransition)(E_STATE, E_EVENT);
typedef void (*StateProcess)(void);

extern StateTransition transition_table[E_STATE_COUNT];
extern StateProcess process_table[E_STATE_COUNT];
extern E_STATE current_state;
extern E_EVENT current_event;

E_STATE InitStateHandler(E_STATE _current_state, E_EVENT _event);
E_STATE StandbyStateHandler(E_STATE _current_state, E_EVENT _event);
E_STATE RunStateHandler(E_STATE _current_state, E_EVENT _event);
E_STATE FaultStateHandler(E_STATE _current_state, E_EVENT _event);


void InitializeTable(void);
void InitializeProcessTable(void);

void SetEvent(E_EVENT _event);
void ModeTask(void);

#endif //FSM_H_
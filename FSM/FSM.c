#include "FSM.h"

StateTransition transition_table[E_STATE_COUNT];
StateProcess process_table[E_STATE_COUNT];
E_STATE current_state;
E_EVENT current_event;

E_STATE InitStateHandler(E_STATE _current_state, E_EVENT _event)
{
    switch (_event)
    {
    case E_EVENT_INIT_DONE:
        return E_STATE_STANDBY;
        break;
    case E_EVENT_FAULT_DETECTED:
        return E_STATE_FAULT;
        break;
    default:
        return _current_state;
        break;
    }
}

E_STATE StandbyStateHandler(E_STATE _current_state, E_EVENT _event)
{
    switch (_event)
    {
    case E_EVENT_READY_DONE:
        return E_STATE_RUN;
        break;
    case E_EVENT_FAULT_DETECTED:
        return E_STATE_FAULT;
        break;
    default:
        return _current_state;
        break;
    }
}

E_STATE RunStateHandler(E_STATE _current_state, E_EVENT _event)
{
    switch (_event)
    {
    case E_EVENT_FAULT_DETECTED:
        return E_STATE_FAULT;
        break;
    default:
        return _current_state;
        break;
    }
}

E_STATE FaultStateHandler(E_STATE _current_state, E_EVENT _event)
{
    switch (_event)
    {
    case E_EVENT_FAULT_CLEAR:
        return E_STATE_INIT;
        break;
    default:
        return _current_state;
        break;
    }
}

void InitializeTable(void)
{
    transition_table[E_STATE_INIT] = InitStateHandler;
    transition_table[E_STATE_STANDBY] = StandbyStateHandler;
    transition_table[E_STATE_RUN] = RunStateHandler;
    transition_table[E_STATE_FAULT] = FaultStateHandler;
}

void InitializeProcessTable(void)
{

}

void SetEvent(E_EVENT _event)
{
    if(current_event != E_EVENT_FAULT_DETECTED)
    {
        current_event = _event;
    }
    else
    {
        if(_event == E_EVENT_FAULT_CLEAR)
        {
            current_event = _event;
        }
    }
}

void ModeTask(void)
{
    current_state = transition_table[current_state](current_state, current_event);
    process_table[current_state]();
}
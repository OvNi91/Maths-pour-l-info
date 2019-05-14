#include <iostream>
#include <string>
#include <fstream>
#include "automaton.h"


using namespace std;

void automaton::completer_automaton()
{
    if (this->is_complete==1)
    {
        cout<<"your automaton is already complete"<<endl;
    }
    else
    {
        _nbr_states+=1;
        _nbr_transition+=_nbr_symbols;

    }
}

void automaton::is_complete()
{
    if(_nbr_states*_nbr_symbols==_nbr_transitions)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

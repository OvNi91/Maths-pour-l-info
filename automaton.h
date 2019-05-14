#ifndef AUTOMATON_H_INCLUDED
#define AUTOMATON_H_INCLUDED
#include <iostream>
#include <string>

class automaton {
protected:
    int _nb_transitions;
    int _nb_states;
    int _nb_init_states;
    std::string _init_states;
    int _nb_final_states;
    std::string final_states;
    int _nb_symbols;
    std::string _transitions;
    std::string _tableau;

public:
    void display();
    void fill_automaton();
    void completer_automaton();
    void is_complete();
};

#endif // AUTOMATON_H_INCLUDED

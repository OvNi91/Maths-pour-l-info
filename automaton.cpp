#include <iostream>
#include <string>
#include <fstream>
#include "automaton.h"


using namespace std;

void automaton::fill_automaton()
{
    ifstream monFichier("Automate1.txt");
    if(monFichier)
    {
        string tmp; // Va nous permettre de stocker les strings de chaque ligne
        getline(monFichier,tmp);
        _nb_symbols = stoi(tmp,10);


    }
}

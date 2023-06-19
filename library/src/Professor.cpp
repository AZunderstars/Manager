#include "Professor.hpp"
using namespace std;

Professor::Professor(string _name)
{
    if (_name == EMPTY_STRING)
    {
        cerr << EMPTY_FIELD;
        exit(EXIT_SUCCESS);
    }
    name = _name;
    penalty = 0;
}

bool Professor::can_borrow()
{
    return borrowed_docs.size() < MAX_BORROWED_PROF;
}

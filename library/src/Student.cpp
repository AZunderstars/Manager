#include "Student.hpp"
using namespace std;

Student::Student(string _id_string, string _name)
{
    if (_id_string == EMPTY_STRING || _name == EMPTY_STRING)
    {
        cerr << EMPTY_FIELD;
        exit(EXIT_SUCCESS);
    }
    id = stoi(_id_string);
    name = _name;
    penalty = 0;
}

bool Student::can_borrow()
{
    return borrowed_docs.size() < MAX_BORROWED_STUD;
}

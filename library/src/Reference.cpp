#include "Reference.hpp"
using namespace std;

Reference::Reference(string _title)
{
    if (_title == EMPTY_STRING)
    {
        cerr << EMPTY_FIELD;
        exit(EXIT_SUCCESS);
    }
    title = _title;
}

void Reference::borrow(int day)
{
    is_borrowed = true;
    borrow_day = day;
    times_extended = 0;
    deadline = day + REFERENCE_DEADLINE;
}

int Reference::get_penalty(int today)
{
    int penalty = 0;
    int delay = today - deadline;
    for (int i = 0; i < delay; i++)
    {
        if (i < REFERENCE_FIRST_PENALTY_DAYS)
            penalty += REFERENCE_FIRST_PENALTY;
        else
            penalty += REFERENCE_SECOND_PENALTY;
    }
    return penalty;
}

void Reference::extend(int today)
{
    check_extend_day(today);
    check_extend_limit();
    check_extendable();
    times_extended++;
    deadline += REFERENCE_DEADLINE;
}

void Reference::check_extend_limit()
{
    if (times_extended == REFERENCE_EXTEND_LIMIT)
    {
        cerr << EXTEND_LIMIT_REACHED;
        exit(EXIT_SUCCESS);
    }
}

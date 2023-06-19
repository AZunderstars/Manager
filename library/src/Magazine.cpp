#include "Magazine.hpp"
using namespace std;

Magazine::Magazine(string _title, int _year, int _number)
{
    if (_title == EMPTY_STRING)
    {
        cerr << EMPTY_FIELD;
        exit(EXIT_SUCCESS);
    }
    if (_number < 1)
    {
        cerr << INVALID_NUMBER;
        exit(EXIT_SUCCESS);
    }
    if (_year < 1)
    {
        cerr << INVALID_YEAR;
        exit(EXIT_SUCCESS);
    }
    title = _title;
    year = _year;
    number = _number;
}

void Magazine::borrow(int day)
{
    is_borrowed = true;
    borrow_day = day;
    times_extended = 0;
    deadline = day + MAGAZINE_DEADLINE;
}

int Magazine::get_penalty(int today)
{
    int penalty = 0, daily_penalty;
    if (year < OLDER_MAGAZINE_YEAR)
        daily_penalty = OLDER_MAGAZINE_PENALTY;
    else
        daily_penalty = NEW_MAGAZINE_PENALTY;
    int delay = today - deadline;
    if (delay > 0)
        penalty += daily_penalty * delay;
    return penalty;
}

void Magazine::extend(int today)
{
    check_extend_day(today);
    check_extend_limit();
    check_extendable();
    times_extended++;
    deadline += MAGAZINE_DEADLINE;
}

void Magazine::check_extend_limit()
{
    if (times_extended == MAGAZINE_EXTEND_LIMIT)
    {
        cerr << EXTEND_LIMIT_MAGAZINE_REACHED;
        exit(EXIT_SUCCESS);
    }
}

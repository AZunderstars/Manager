#include "Book.hpp"
using namespace std;

Book::Book(string _title)
{
    if (_title == EMPTY_STRING)
    {
        cerr << EMPTY_FIELD;
        exit(EXIT_SUCCESS);
    }
    title = _title;
}

void Book::borrow(int day)
{
    is_borrowed = true;
    borrow_day = day;
    times_extended = 0;
    deadline = day + BOOK_DEADLINE;
}

int Book::get_penalty(int today)
{

    int penalty = 0;
    int delay = today - deadline;
    for (int i = 0; i < delay; i++)
    {
        if (i < BOOK_FIRST_PENALTY_DAYS)
            penalty += BOOK_FIRST_PENALTY;
        else if (i < BOOK_SECOND_PENALTY_DAYS)
            penalty += BOOK_SECOND_PENALTY;
        else
            penalty += BOOK_THIRD_PENALTY;
    }
    return penalty;
}

void Book::extend(int today)
{
    check_extend_day(today);
    check_extend_limit();
    check_extendable();
    times_extended++;
    deadline += BOOK_DEADLINE;
}

void Book::check_extend_limit()
{
    if (times_extended == BOOK_EXTEND_LIMIT)
    {
        cerr << EXTEND_LIMIT_REACHED;
        exit(EXIT_SUCCESS);
    }
}

#include "Document.hpp"
using namespace std;

string Document::get_title() { return title; }

bool Document::get_is_borrowed() { return is_borrowed; }

void Document::got_returned() { is_borrowed = false; }

void Document::check_extend_day(int today)
{
    if (today == borrow_day)
    {
        cerr << EXTEND_TODAY;
        exit(EXIT_SUCCESS);
    }
    if (today > deadline)
    {
        cerr << EXTEND_AFTER_PENALTY;
        exit(EXIT_SUCCESS);
    }
}

void Document::check_extendable()
{
    if (!is_borrowed)
    {
        cerr << HAVE_NOT_BORROWED;
        exit(EXIT_SUCCESS);
    }
}
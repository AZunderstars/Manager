#include "Person.hpp"
using namespace std;

string Person::get_name() { return name; }

void Person::borrow(Document *document)
{
    if (has_document(document->get_title()))
    {
        cerr << ALREADY_HAS_DOCUMENT;
        exit(EXIT_SUCCESS);
    }
    if (!can_borrow())
    {
        cerr << MAXIMUM_BORROWED;
        exit(EXIT_SUCCESS);
    }
    else
        borrowed_docs.push_back(document);
}

void Person::extend(string document_title, int today)
{
    if (has_document(document_title))
    {
        Document *document = get_borrowed_doc(document_title);
        document->extend(today);
    }
    else
    {
        cerr << HAVE_NOT_BORROWED;
        exit(EXIT_SUCCESS);
    }
}

void Person::returned(string document_title, int today)
{
    if (has_document(document_title))
    {
        Document *document = get_borrowed_doc(document_title);
        penalty += document->get_penalty(today);
        for (int i = 0; i < borrowed_docs.size(); i++)
        {
            if (borrowed_docs[i]->get_title() == document->get_title())
                borrowed_docs.erase(borrowed_docs.begin() + i);
        }
        document->got_returned();
    }
    else
    {
        cerr << HAVE_NOT_BORROWED;
        exit(EXIT_SUCCESS);
    }
}

int Person::get_penalty(int today)
{
    int total_penalty = penalty;
    for (int i = 0; i < borrowed_docs.size(); i++)
        total_penalty += borrowed_docs[i]->get_penalty(today);
    return total_penalty;
}

bool Person::has_document(string document_title)
{
    for (int i = 0; i < borrowed_docs.size(); i++)
    {
        if (borrowed_docs[i]->get_title() == document_title)
            return true;
    }
    return false;
}

Document *Person::get_borrowed_doc(string document_title)
{
    Document *borrowed_doc;
    for (int i = 0; i < borrowed_docs.size(); i++)
    {
        if (borrowed_docs[i]->get_title() == document_title)
            borrowed_doc = borrowed_docs[i];
    }
    return borrowed_doc;
}

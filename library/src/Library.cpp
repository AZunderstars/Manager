#include "Library.hpp"
using namespace std;

void Library::add_student_member(string student_id, string student_name)
{
    check_person_add(student_name);
    persons.push_back(new Student(student_id, student_name));
}

void Library::add_prof_member(string prof_name)
{
    check_person_add(prof_name);
    persons.push_back(new Professor(prof_name));
}

void Library::check_person_add(string name)
{
    for (int i = 0; i < persons.size(); i++)
    {
        if (persons[i]->get_name() == name)
        {
            cerr << NAME_ALREADY_EXISTS;
            exit(EXIT_SUCCESS);
        }
    }
}

void Library::add_book(string book_title, int copies)
{
    check_document_title(book_title);
    for (int i = 0; i < copies; i++)
        documents.push_back(new Book(book_title));
}

void Library::add_magazine(string magazine_title, int year, int number, int copies)
{
    check_document_title(magazine_title);
    for (int i = 0; i < copies; i++)
        documents.push_back(new Magazine(magazine_title, year, number));
}

void Library::add_reference(string reference_title, int copies)
{
    check_document_title(reference_title);
    for (int i = 0; i < copies; i++)
        documents.push_back(new Reference(reference_title));
}

void Library::check_document_title(string title)
{
    for (int i = 0; i < documents.size(); i++)
    {
        if (documents[i]->get_title() == title)
        {
            cerr << DOCUMENT_ALREADY_EXISTS;
            exit(EXIT_SUCCESS);
        }
    }
}

void Library::borrow(string member_name, string document_title)
{
    Person *borrower = find_person(member_name);
    vector<Document *> available_documents = find_available_document(document_title);
    if (available_documents.empty())
    {
        cerr << INVALID_DOCUMENT;
        exit(EXIT_SUCCESS);
    }
    borrower->borrow(available_documents[0]);
    available_documents[0]->borrow(today);
}

Person *Library::find_person(string member_name)
{
    int person_index;
    for (int i = 0; i < persons.size(); i++)
    {
        if (persons[i]->get_name() == member_name)
            person_index = i;
    }
    return persons[person_index];
}

vector<Document *> Library::find_available_document(string document_title)
{
    vector<Document *> found_documents;
    for (int i = 0; i < documents.size(); i++)
    {
        if (documents[i]->get_title() == document_title && !documents[i]->get_is_borrowed())
            found_documents.push_back(documents[i]);
    }
    return found_documents;
}

void Library::extend(string member_name, string document_title)
{
    Person *borrower = find_person(member_name);
    borrower->extend(document_title, today);
}

void Library::return_document(string member_name, string document_title)
{
    Person *borrower = find_person(member_name);
    borrower->returned(document_title, today);
}

int Library::get_total_penalty(string member_name)
{
    Person *person = find_person(member_name);
    return person->get_penalty(today);
}

vector<string> Library::available_titles()
{
    vector<string> available_docs;
    for (int i = 0; i < documents.size(); i++)
    {
        if (!documents[i]->get_is_borrowed())
            available_docs.push_back(documents[i]->get_title());
    }
    return available_docs;
}

void Library::time_pass(int days)
{
    if (days < 0)
    {
        cerr << INVALID_DAY;
        exit(EXIT_SUCCESS);
    }
    today += days;
}

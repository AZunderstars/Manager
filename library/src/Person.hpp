#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include "Document.hpp"
#include "consts.hpp"
#include <vector>
#include <string>

class Person
{
public:
    std::string get_name();
    void borrow(Document *document);
    void extend(std::string document_title, int today);
    void returned(std::string document_title, int today);
    int get_penalty(int today);

protected:
    virtual bool can_borrow() { return true; };
    bool has_document(std::string document_title);
    Document *get_borrowed_doc(std::string document_title);
    std::string name;
    std::vector<Document *> borrowed_docs;
    int penalty;
};

#endif

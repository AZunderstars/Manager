#ifndef __BOOK_HPP__
#define __BOOK_HPP__

#include "Document.hpp"
#include "consts.hpp"
#include <string>

class Book : public Document
{
public:
    Book(std::string _title);
    virtual void borrow(int day);
    int get_penalty(int today);
    virtual void extend(int today);
    
private:
    void check_extend_limit();
};

#endif

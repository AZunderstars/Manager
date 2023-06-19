#ifndef __DOCUMENT_HPP__
#define __DOCUMENT_HPP__

#include "consts.hpp"
#include <string>
#include <iostream>

class Document
{
public:
    std::string get_title();
    virtual void borrow(int day){};
    bool get_is_borrowed();
    virtual void extend(int today){};
    void got_returned();
    virtual int get_penalty(int today) { return 0; };

protected:
    virtual void check_extend_limit(){};
    void check_extend_day(int today);
    void check_extendable();
    int deadline;
    int times_extended;
    bool is_borrowed;
    std::string title;
    int borrow_day;
};

#endif

#ifndef __MAGAZINE_HPP__
#define __MAGAZINE_HPP__

#include "Document.hpp"
#include "consts.hpp"
#include <string>

class Magazine : public Document
{
public:
    Magazine(std::string _title, int _year, int _number);
    void borrow(int day);
    int get_penalty(int today);
    void extend(int today);

private:
    void check_extend_limit();
    int year, number;
};

#endif

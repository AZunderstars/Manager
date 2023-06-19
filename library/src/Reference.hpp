#ifndef __REFERENCE_HPP__
#define __REFERENCE_HPP__

#include "Document.hpp"
#include "consts.hpp"
#include <string>

class Reference : public Document
{
public:
    Reference(std::string _title);
    void borrow(int day);
    int get_penalty(int today);
    void extend(int today);

private:
    void check_extend_limit();
};

#endif

#ifndef __PROFESSOR_HPP__
#define __PROFESSOR_HPP__

#include "Person.hpp"
#include "Document.hpp"
#include "consts.hpp"
#include <string>

class Professor : public Person
{
public:
    Professor(std::string _name);
    
private:
    bool can_borrow();
};

#endif

#ifndef __STUDENT_HPP__
#define __STUDENT_HPP__

#include "Person.hpp"
#include "Document.hpp"
#include "consts.hpp"
#include <string>

class Student : public Person
{
public:
    Student(std::string _id_string, std::string _name);

private:
    bool can_borrow();
    int id;
};

#endif

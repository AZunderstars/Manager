#ifndef __BOX_HPP__
#define __BOX_HPP__

#include "Component.hpp"
#include "consts.hpp"
#include <iostream>
#include <vector>

class Box : public Component
{
public:
    Box(int _id);
    int get_cost();
    int get_weight();
    void add(Component *new_content);

private:
    std::vector<Component *> contents;
};

#endif

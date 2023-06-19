#ifndef __ITEM_HPP__
#define __ITEM_HPP__

#include "Component.hpp"
#include "consts.hpp"
#include <iostream>

class Item : public Component
{
public:
    Item(int _id, int _cost, int _weight);
    int get_cost();
    int get_weight();
    void add(Component *new_content);

private:
    int cost;
    int weight;
};

#endif
#ifndef __CARTMANAGER_HPP__
#define __CARTMANAGER_HPP__

#include "Component.hpp"
#include "Item.hpp"
#include "Box.hpp"
#include "consts.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

class CartManager
{
public:
    void add_item(int id, int cost, int weight);
    void add_box(int id);
    void add_to_box(int box_id, int id);
    int evaluate_cart();

private:
    void check_duplicate_id(int id);
    std::vector<Component *> cart;
};

#endif

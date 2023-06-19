#include "Item.hpp"
using namespace std;

Item::Item(int _id, int _cost, int _weight)
{
    id = _id;
    cost = _cost;
    weight = _weight;
}

int Item::get_cost() { return cost; }

int Item::get_weight() { return weight; }

void Item::add(Component *new_content){
    cerr << INVALID_ADD;
    exit(EXIT_SUCCESS);
}

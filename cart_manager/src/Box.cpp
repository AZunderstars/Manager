#include "Box.hpp"
using namespace std;

Box::Box(int _id)
{
    id = _id;
}

int Box::get_cost()
{
    int items_cost = EMPTY_BOX_COST;
    int weight_cost = 0;
    int item_weight = EMPTY_BOX_WEIGHT;
    for (int i = 0; i < contents.size(); i++)
    {
        items_cost += contents[i]->get_cost();
        item_weight += contents[i]->get_weight();
    }
    if (item_weight < SMALL_PACK_WEIGHT_LIMIT)
        weight_cost = item_weight / SMALL_PACK_RATIO;
    else
        weight_cost = item_weight / BIG_PACK_RATIO;
    return items_cost + weight_cost;
}

int Box::get_weight()
{
    int weight = EMPTY_BOX_WEIGHT;
    for (int i = 0; i < contents.size(); i++)
        weight += contents[i]->get_weight();
    return weight;
}

void Box::add(Component *new_content)
{
    contents.push_back(new_content);
}

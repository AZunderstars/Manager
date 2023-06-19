#include "CartManager.hpp"
using namespace std;

void CartManager::add_item(int id, int cost, int weight)
{
    check_duplicate_id(id);
    cart.push_back(new Item(id, cost, weight));
}

void CartManager::add_box(int id)
{
    check_duplicate_id(id);
    cart.push_back(new Box(id));
}

void CartManager::add_to_box(int box_id, int id)
{
    Component *box, *item;
    auto box_it = find_if(cart.begin(), cart.end(), [&box_id](Component *const &c)
                          { return c->get_id() == box_id; });
    auto item_it = find_if(cart.begin(), cart.end(), [&id](Component *const &c)
                           { return c->get_id() == id; });
    if (box_it == cart.end() || item_it == cart.end())
    {
        cerr << NOT_FOUND;
        exit(EXIT_SUCCESS);
    }
    int box_index=distance(cart.begin(), box_it);
    int item_index=distance(cart.begin(), item_it);
    box = cart[box_index];
    item = cart[item_index];
    cart.erase(cart.begin() + item_index);
    box->add(item);
}

int CartManager::evaluate_cart()
{
    int cost = 0;
    for (int i = 0; i < cart.size(); i++)
        cost += cart[i]->get_cost();
    return cost;
}

void CartManager::check_duplicate_id(int id)
{
    for (int i = 0; i < cart.size(); i++)
    {
        if (cart[i]->get_id() == id)
        {
            cerr << DUPLICATE_ITEM;
            exit(EXIT_SUCCESS);
        }
    }
}

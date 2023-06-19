#include <iostream>
#include "CartManager.hh"

int main()
{
    CartManager cart_manager;
    cart_manager.add_item(1, 1, 5);
    cart_manager.add_box(2);
    cart_manager.add_to_box(2, 3);
    std::cout << cart_manager.evaluate_cart() << '\n';
}
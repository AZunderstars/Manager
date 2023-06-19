#include <iostream>
#include "CartManager.hh"

int main()
{
    CartManager cart_manager;
    cart_manager.add_item(1, 5, 10);
    cart_manager.add_item(2, 2, 4);
    cart_manager.add_item(3, 4, 8);
    cart_manager.add_box(4);
    cart_manager.add_to_box(4, 1);
    cart_manager.add_to_box(4, 2);
    cart_manager.add_to_box(4, 3);
    cart_manager.add_item(5, 14, 15);
    cart_manager.add_box(6);
    cart_manager.add_to_box(6, 5);
    std::cout << cart_manager.evaluate_cart() << '\n';
}
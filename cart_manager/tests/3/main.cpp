#include <iostream>
#include "CartManager.hpp"

int main()
{
    CartManager cart_manager;
    cart_manager.add_item(1, 1, 7);
    cart_manager.add_item(2, 4, 2);
    cart_manager.add_box(3);
    cart_manager.add_to_box(3, 1);
    cart_manager.add_to_box(3, 2);
    cart_manager.add_item(4, 5, 5);
    cart_manager.add_item(5, 6, 8);
    cart_manager.add_box(6);
    cart_manager.add_to_box(6, 3);
    cart_manager.add_to_box(6, 4);
    cart_manager.add_to_box(6, 5);
    cart_manager.add_item(7, 3, 2);
    cart_manager.add_box(8);
    cart_manager.add_to_box(8, 7);
    cart_manager.add_box(9);
    cart_manager.add_item(10, 2, 1);
    std::cout << cart_manager.evaluate_cart() << '\n';
}
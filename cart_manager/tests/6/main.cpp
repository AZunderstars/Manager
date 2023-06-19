#include <iostream>
#include "CartManager.hpp"

int main()
{
    CartManager cart_manager;
    cart_manager.add_item(1, 2, 1);
    cart_manager.add_item(2, 4, 2);
    cart_manager.add_to_box(2, 1);
    std::cout << cart_manager.evaluate_cart() << '\n';
}
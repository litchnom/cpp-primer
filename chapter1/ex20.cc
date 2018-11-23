#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item trans;
    while (std::cin >> trans)   // Output every transaction provided.
        std::cout << trans << std::endl;
    return 0;
}

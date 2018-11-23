#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item trans, sum = std::cin;
    while (std::cin >> trans)   // Sum every transaction provided.
        sum += trans;
    std::cout << sum << std::endl;
    return 0;
}

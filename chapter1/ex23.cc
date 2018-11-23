#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item in, stored;
    int count = 0;
    if (std::cin >> in) {
        count = 1;
        stored = in;

        while (std::cin >> in) {    // Count the number of transactions with matching ISBN values.
            if (stored.isbn() == in.isbn())
                ++count;
            else {
                std::cout << "The number of transactions that occurred for ISBN "
                    << stored.isbn() << " is " << count << std::endl;
                stored = in;
                count = 1;
            }
        }

        std::cout << "The number of transactions that occurred for ISBN "
            << stored.isbn() << " is " << count << std::endl;
    }


    return 0;
}

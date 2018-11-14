/* The for loop sums the numbers from  -100  to  100. Due to an inclusive conditition
 * the final sum should be  0. */

#include <iostream>
int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;

    std::cout << sum << std::endl;
    return 0;
}

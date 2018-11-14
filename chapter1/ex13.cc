#include <iostream>
int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)  // for loop to sum values between  50  and  100
    {
        sum += i;
    }
    std::cout << "The sum of values between 50 and 100 is "
        << sum << std::endl;

    for (int i = 10; i >= 0; --i)    // for loop that prints numbers from ten down to zero
    {
        std::cout << i << std::endl;
    }

    int val1 = 0, val2 = 0;
    std::cout << "Please enter 2 values: " << std::endl;
    std::cin >> val1 >> val2;       // retrieving values from the user
    for (int i = val1; i >= val2; --i) // looping over the values in a descending order
    {
        std::cout << i << std::endl;        // printing all variables in specified range
    }                                       // if applicable

    for (int i = val1; i <= val2; ++i) // looping over the values in an ascending order
    {
        std::cout << i << std::endl;        // printing all variables in specified range
    }                                       // if applicable

    return 0;
}

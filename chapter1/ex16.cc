#include <iostream>
int main()
{
    int sum = 0, input = 0;
    std::cout << "Please enter a set of numbers: " << std::endl;
    while(std::cin >> input) // A while loop to sum all provided numbers
        sum += input;
    std::cout << "The sum of the numbers received is "
        << sum << std::endl;
    return 0;
}

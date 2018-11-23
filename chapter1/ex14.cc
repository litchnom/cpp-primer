#include <iostream>
int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;

    int val = -100;
    while (val <= 100) {
        sum += val;
        ++val;
    }

    std::cout << sum << std::endl;
    return 0;
}

/* After writing two equivalent loops, it seems that the advantage to the for loop
 * is a conservation of space and easier readability due to the header taking care
 * of a variable initialisation and incrementation and avoiding the need for curly
 * braces due to the body being 1 line long. Something that could be viewed as either an
 * advantage or disadvantage, depending on the scenario, is the difference in the 
 * condition variable being defined outside the loop. It could be that the intention
 * while is better suited towards conditions that require functions rather than simple
 * iteration. */

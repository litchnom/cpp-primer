#include <iostream>
int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << "*/";
    std::cout << /*  "*/" /* "/*"  */;
    std::cout << std::endl;

    return 0;
}

/* I expect lines 4 and 5 to print. 6 should cause an error, or at least not print.
 * 7 should print the content between the uncommented quotation marks. */

// random experiments in namespaces
#include <iostream>

// define a namespace
namespace Jill {
    double fetch;
}

char fetch;
int main()
{
    using Jill::fetch;
    // double fetch; Error redeclaration
    std::cin >> fetch;
    std::cin >> ::fetch; // :: means global 

    // print out the values 
    std::cout << fetch << std::endl;
    std::cout << ::fetch << std::endl;
    return 0;
}
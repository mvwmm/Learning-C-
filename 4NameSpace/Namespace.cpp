#include <iostream>

    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identical entities with similar names.
    //             as long as the namespaces are different.

    namespace first{
        int x = 1;
    }
    namespace second{
        int x = 2;
    }

    int main() {
        int x = 0;

    std::cout << x << '\n'; //Prints the value of x that is inside this f(x)
    std::cout << first::x; //Prints the value of x that is inside the first namespace
    std::cout << second::x; //Prints the v alue of x that is inside the second namespace
}



// So entities can have same name as long as they do NOT have same space.
// If there is no prefix like "(namespace's name)" then the value printed will be just
// the value inside of the function








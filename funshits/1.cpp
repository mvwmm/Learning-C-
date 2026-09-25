#include <iostream>

int main() {
    int age = 19;
    if (age < 0){
        std::cout << "Enter valid age brochacho";
    }
    else if (age > 100){
        std::cout << "Mb gng and not to disrespect you but you are too old for this";
    }
    else if (age > 18){
        std::cout << "Adult";
    }
    else {
        std::cout << "Not an adult";
    }
}
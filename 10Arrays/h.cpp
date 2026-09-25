#include <iostream>

int main(){
    int numbers[5] = {10, 20, 30, 40, 50};
    int index;
    std::cout << "UHh which array's index and value you want to know? ";
    std::cin >> index;
    std::cout << "The number at array " << index << " is: " << numbers[index];
}

//out-of-bounds access.
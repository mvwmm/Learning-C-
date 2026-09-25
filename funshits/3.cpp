#include <iostream>

int square(int a) {
    return a*a;
}
void multiply(int a, int b) {
    return a*b;
}

int main(){
    int a = 7;
    int b = 12;
    //int result = multiply(a);

    int result = multiply(a, b);
    std::cout << result;
}
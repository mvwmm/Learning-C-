// Lowkey remember that:
// integer division: The digits that come after the decimal arent show at all. Only the integer that is before decimal is shown
//                   For example: 10/3 gives 3 in integer division
// 
// Float division: The digits that come after decimal are also shown. This one is basically our normal division
//                 For example: 10/3 gives 3.33333 and so on in float division
// 

#include <iostream>
int main() {
    int a = 12;
    int b = 4;
    
    std::cout << "The addition of the given numbers is: " << a+b << "\n";
    std::cout << "The substraction of the given numbers is: " << a-b << "\n";
    std::cout << "The multiplication of the given numbers is: " << a*b << "\n";
    std::cout << "The division of the given numbers is: " << a/b << "\n"; // if the variables are integers then the result is integer division instead of float division
    std::cout << "The reminder of the given numbers is: " << a % b << "\n";
}
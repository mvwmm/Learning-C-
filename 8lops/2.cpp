#include <iostream>

int main() {
    int homework = 50;
    if (homework > 5) {
        std::cout << "Bro you are cooked if you dont finish these homeworks by tmr morning" << "\n";
    }
    else if (homework == 0) {
        std::cout << "Dang bro you are really cooking! I am prod of you!" << "\n";
    }
    else if (homework <= -1) {
        std::cout << "Son how tf is this even possible???????" << "\n";
    }
    else {
        std::cout <<"Okay this is actually really manageable!" << "\n";
    }
}
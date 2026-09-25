#include <iostream>

int main() {

    //integer (Whole numbers, cant print numbers with decimal)
    int age = 16;
    int year = 2026;
    int days = 7.5;

    std::cout << days << '\n'; //Notice how in output the decimal portion isnt executed

    //double (number including decimal)
    double price = 10.99;
    double gpa = 4.8;
    double temperature = 25.1;

    //print
    std::cout << price << '\n';

    //char: single character
    char grade = 'A';
    char initial = 'C';
    char dollarsign = '$';

    //print
    std::cout << grade << '\n';

    //boolean (true or false)
    bool student = false;
    bool light_switch = true;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Nokqrii";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string Address = "123 Fake Street";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old!";

    //You can include numbers but they are treated differently in strings
}
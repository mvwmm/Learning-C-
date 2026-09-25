#include <iostream>
#include <string>

int main(){
    std::string name = "Nokqrii";
    bool hasAccount = true;
    if (name == "Nokqrii" && hasAccount){
        std::cout << "Access granted!";
    }
    else{
        std::cout << "Access denied.";
    }
}
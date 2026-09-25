#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int >> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main() {

    //typedef = reserved keyword used to create an additional name
    //          (alias) for another data type.
    //          New identifier for an existing type
    //          Helps with readability and reduces typos
    //          Use when there is a cleaer benefit
    //          Replaced with 'using' (work better w/ templates)


    text_t FirstName = "Nok on top!";
    number_t age = 21;

    std::cout << FirstName << '\n';
    std::cout << age << '\n';

    return 0;
}



//"using" is more popular because of easiness. Also helps with readability. 
//However you should only use this when you have a clear benefit
#include <iostream>

int main() {
    std::cout << "I like Pizza!" << std::endl;
    std::cout << "It's really good!" << '\n';
    return 0;
}


// comment: This is a simple C++ program that prints two lines of text to the console. It uses the iostream library for input and output operations. The main function is the entry point of the program, and it returns 0 to indicate that the program ended successfully.


// This is a single line comment.

/* 
 This is multiline comment. It can be used to provide more detailed explanations
 or to comment out larger sections of code.
*/


/* Also btw "std::endl" is used to insert a newline character and flush the output buffer, 
ensuring that the output is displayed immediately.
*/

// And "std::cout" is the same thing as " '\n' " but it does not flush the output buffer, 
// so it may be more efficient in some cases when you don't need to ensure immediate output.
#include <iostream>

/*
    Here I will try to know if Char type throw Exceptions if a put
    a whole word on it or if it just returns the first letter that comes in
*/
int main() {
    char letter = 'C';
    char word = 'T';
    std::cout << "When I storage a single letter in a char variable, that's what comes back: " << letter << std::endl;
    std::cout << "However, this is what comes in when I try to storage a whole word in a char variable: " << word << std::endl;
    return 0;
    // Now I know that it returns an Exception!
}
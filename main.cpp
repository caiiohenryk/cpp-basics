#include <iostream>

int main() {
    std::cout << "Hello world!" << std::endl;
    std::cout << "I'm trying to memorize C++ syntax and learn a new programming language!" << std::endl;

    // Now, I will try to use some C++ string concatenation with variables
    int age = 21;
    std::string name = "Caio";
    // We can turn variables into readonly using the 'const' keyword, see:
    const std::string lastName = "Chaves";
    std::cout << "Hello!" << " My name is " << name << " " << lastName << " and I'm " << age << " yo" << std::endl;
    std::cout << "Hope you like my code! :o" << std::endl;
    return 0;
}
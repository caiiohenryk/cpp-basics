#include <iostream>

int main() {
    int clock = 0;

    // Building a while loop
    while(clock <= 10) {
        std::cout << "Clock pointer: " << clock << std::endl;
        clock++;
    }

    // We can also build a for loop with other steps, like:
    for(int i = 1; i <= 10; i++) {
        std::cout << "my secondary 'clock' at the moment equals " << i << std::endl;
    }
    return 0;
}
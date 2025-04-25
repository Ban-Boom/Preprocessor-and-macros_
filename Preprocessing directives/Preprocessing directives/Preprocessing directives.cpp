#include <iostream>

#define MODE 1

#ifndef MODE
#error "You must define the constant MODE"
#endif

#if MODE == 0

int main() {
    std::cout << "Running in training mode" << std::endl;
    return 0;
}

#elif MODE == 1

int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Running in combat mode" << std::endl;
    int x, y;
    std::cout << "Enter number 1: ";
    std::cin >> x;
    std::cout << "Enter number 2: ";
    std::cin >> y;
    std::cout << "Sum result: " << add(x, y) << std::endl;
    return 0;
}

#else

int main() {
    std::cout << "Unknown mode. Exiting." << std::endl;
    return 0;
}

#endif

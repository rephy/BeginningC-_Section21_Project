#include <iostream>

consteval int get_version() {
    return 20;
}

int main() {
    std::cout << "Hello, World in C++" << get_version() << "!" << std::endl;
    return 0;
}
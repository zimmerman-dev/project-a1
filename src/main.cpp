#include <iostream>
#include <string>

void greeter() {
    std::cout << "Enter your first name: ";
    std::string name{};
    std::cin >> name;
    std::cout << "Welcome " << name << ".\n";
}

int main() {
    greeter();
    std::cout << "This is project-a1!" << '\n';

    return 0;
}

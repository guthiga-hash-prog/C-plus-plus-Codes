#include <iostream>

int main() {
    int Age;
    std::cout << "Enter your Age? ";
    std::cin >> Age;

    if (Age >= 18) {
        std::cout << "Congratulations, you are allowed to vote." << std::endl;
    } else {
        std::cout << "Sorry, you are not allowed to vote." << std::endl;
    }

    return 0;
}

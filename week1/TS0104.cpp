#include <iostream>
#include <string>

void mainFunction() {
    std::string user;
    while (std::getline(std::cin, user)) {
        if (user.empty()) // Check for empty line as EOF in this context
            break;

        while (user.length() > 10) {
            std::cout << user.substr(0, 10) << std::endl;
            user = user.substr(10);
        }

        for (int i = 0; i < 10 - user.length(); ++i) {
            std::cout << '_';
        }
        std::cout << user << std::endl;
    }
}

int main() {
    mainFunction();
    return 0;
}

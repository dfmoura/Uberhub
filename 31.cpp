#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words = {"Hello", "world", "!"};

    for (auto it = words.begin(); it != words.end(); ++it) {
        std::cout << *it;
        if (it != words.end() - 1) {
            std::cout << "-";
        }
    }

    std::cout << std::endl;

    return 0;
}

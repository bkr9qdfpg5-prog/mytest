#include <iostream>

int main() {
    int x = 0;          // Initialize to avoid undefined behavior
    bool flag = false;  // Initialize to avoid undefined behavior

    if (flag) {
        x = 42;
    }

    std::cout << x << std::endl;

    return 0;
}

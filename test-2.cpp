#include <iostream>

int main() {
    // Initialize variables to avoid undefined behavior
    bool flag = false;   // set to the intended condition when available
    int x = 0;           // default value when flag is false

    if (flag) {
        x = 42;
    }

    std::cout << x << std::endl;
    return 0;
}

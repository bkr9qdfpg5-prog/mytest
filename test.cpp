#include <iostream>

int main() {
    int x;          // Uninitialized local variable
    bool flag;      // Another uninitialized variable

    if (flag) {     // Uses uninitialized 'flag' -> undefined behavior
        x = 42;
    }

    std::cout << x << std::endl;  // Uses uninitialized 'x' if flag was false

    return 0;
}

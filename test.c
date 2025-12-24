/**
 * test.c - Simple C program demonstrating proper variable initialization
 * 
 * Purpose: Demonstrates safe C programming practices by avoiding undefined behavior
 * through proper variable initialization.
 */

#include <stdio.h>

int main() {
    // Initialize variables to avoid undefined behavior
    int flag = 0;   // Boolean-like flag (0 = false, 1 = true)
    int x = 0;      // Default value when flag is false
    
    if (flag) {
        x = 42;
    }
    
    printf("%d\n", x);
    return 0;
}
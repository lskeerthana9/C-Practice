#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    // 1. Declaration
    int (*ptr)(int, int);
    
    // 2. Assignment (Both lines below are identical in behavior)
    ptr = &add;       
    // ptr = &add;   
    
    // 3. Invocation (Both lines below are identical in behavior)
    int result1 = ptr(5, 3);
    int result2 = (*ptr)(5, 3);

    printf("Result: %d\n", result1); // Outputs 8
    printf("Result: %d",result2);
    return 0;
}

#include <stdio.h>

int main() {
    int a = 5;   // 00000101
    int b = 3;   // 00000011

    printf("a = %d, b = %d\n", a, b);

    printf("~a = %d\n", ~a);          // Bitwise NOT
    printf("a & b = %d\n", a & b);    // Bitwise AND
    printf("a | b = %d\n", a | b);    // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);    // Bitwise XOR

    printf("a << 1 = %d\n", a << 1);  // Left shift
    printf("a >> 1 = %d\n", a >> 1);  // Right shift

    return 0;
}

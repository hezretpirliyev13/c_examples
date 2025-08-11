#include <stdio.h>
#include <stdint.h>

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

void print_binary(unsigned x, int bits)
{
    for (int i = bits - 1; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
}
void print_binary_2(unsigned x)
{
    uint8_t bits = 8;
    for (int i = bits - 1; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
}
int main()
{
    __uint16_t bits = getbits(0xF2, 4, 3); // Should extract bits 4,3,2
    printf("Decimal: %d\n", bits);
    printf("Binary:0b");
    print_binary_2(bits); // Print 3 bits
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     __uint8_t a =5;
//     __uint8_t *b=&a;

//     printf("%xxx\n",&b);
// }
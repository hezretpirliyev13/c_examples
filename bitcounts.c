#include <stdio.h>
#include <stdint.h>
int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}
int main()
{
    uint8_t bit = bitcount(17);
    printf("%d\n", bit);
}
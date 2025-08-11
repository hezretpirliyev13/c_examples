#include <stdio.h>

int main()
{
    __uint16_t i = 0, n = 13, a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130};
    for (i = 0; i < n; i++)
    {
        printf("%6d%c", a[i], (i % 10 == 9 || i == n - 1) ? '\n' : ' ');
    }
}
     
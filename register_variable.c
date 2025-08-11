#include <stdio.h>

int main()
{
    register __int8_t counter;

    for (counter = 0; counter < 5; counter++)
    {
        printf("Loop count: %d\n", counter);
    }
    return 0;
}
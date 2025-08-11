#include <stdio.h>

void outer()
{
    printf("It's an outer function\n");
    void nested()
    {
        printf("I am a nested function\n");
    }
    nested();
}
int main()
{
    outer();
    return 0;
}
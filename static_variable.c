#include <stdio.h>

void function();
int main()
{
    function();
    function();
}

void function(void)
{

    static int x = 0;
    x++;
    printf("x = %d\n", x);
}
#include <stdio.h>

int main()
{
    printf("Start\n");
    goto label;
    printf("This line will not execute\n");

label:
    printf("This line will execute!\n");
    return 0;
}
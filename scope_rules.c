#include <stdio.h>

void greet(char *name)
{
    printf("Hello I'm %s\n", name);
}
int main()
{
    char name[] = "Hezret";
    greet(name);
    return 0;
}
#include <stdio.h>
    
extern int count;
int main()
{
    printf("count = %d\n", count);
    count = 23;
    printf("count(new) = %d\n", count);
    return 0;
}
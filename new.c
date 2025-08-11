#include <stdio.h>
void change(int *a)
{
    *a=5;
}
int main()
{
    int x=10;
    printf("before=%d\n",x);
    change(&x);
    printf("after=%d\n",x);
    return 0;
}
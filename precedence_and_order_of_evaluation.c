// #include <stdio.h>

// int f()
// {
//     printf("f\n");
//     return 1;
// }
// int g()
// {
//     printf("g\n");
//     return 2;
// }
// int main()
// {
//     int result = f()+g();
//     printf("%d\n",result);
// }
#include <stdio.h>

int main()
{
    int a=1;
    int b=2,c;

    c=(a+=3)+(b*=2);
    printf("%d\n",c);
}
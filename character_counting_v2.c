#include <stdio.h>

int main()
{
    double nc = 0;

    for (nc = 1;  getchar() != EOF; nc++)
    {
        printf("%.0f \n", nc);
    
    }
}
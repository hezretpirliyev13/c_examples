#include <stdio.h>
#include<math.h>
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.2f \t %6.2f \n", fahr, celsius);
        fahr = fahr + step;
           /* code */
           round(fahr);
    }
}
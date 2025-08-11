#include <stdio.h>

int main()
{
    __int16_t year;
    scanf("Please type here a year:%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}
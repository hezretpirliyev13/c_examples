#include <stdio.h>

enum Day
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};
enum Months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
char text[] = "Hello";
int main()
{
    enum Day today = WED;
    enum Months months;
    // if (today == WED and month == JUL)
    for (int i = JAN; i <= DEC; ++i)
    {
        printf("%d \n",i);
    }

    // printf("It's Wednesday!\n");
    // printf("%d.", WED);
    // printf("%d.2025\n", JUL);
    // printf("%c%c%c%c%c\n", text[0], text[1], text[2], text[3], text[4]);
}

// #include <stdio.h>

// #define MAXLINE 1000

// int max;
// char line[MAXLINE];
// char longest[MAXLINE];

// int getline(void);
// void copy(void);

// int main()
// {
//     int len;
//     extern int max;
//     extern char longest[];

//     max = 0;
//     while ((len = getline()) > 0)
//         if (len > max)
//         {
//             max = len;
//             copy();
//         }
//     if (max > 0)
//         printf("%s", longest);
//     return 0;
// }
// int getline(void)
// {
//     int c, i;
//     extern char line[];

//     for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//     {
//         line[i] = c;
//         ++i;
//     }
//     line[i] = '\0';
//     return i;
// }
// void copy(void)
// {
//     int i;
//     extern char line[], longest[];

//     i = 0;
//     while ((longest[i] = line[i]) != '\0')
//         ++i;
// }
#include <stdio.h>

enum Day
{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

// int main()
// {
//     enum Day today = WED;
//     if (today == WED)
//     {
//         printf("It's Wednesday!\n");
//         printf("%d \n", WED);
//     }
// }

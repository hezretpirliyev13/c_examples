// convert  character number to integer variable
// #include <stdio.h>
// char text[] = "2321";

// int atoi(char s[])
// {
//     int i, n;
//     n = 0;
//     for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
//         n = 10 * n + (s[i] - '0');
//     return n;
// }
// int main()
// {
//     printf("%d \n", atoi(text));
// }
// lower: convert c character to lower case character ASCII only
#include <stdio.h>

int lower(int c)
{

    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    else
        return c;
}

int main()
{
    char text = 'H';
    printf("%d %c \n", text, lower(text));
}
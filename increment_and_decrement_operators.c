// #include <stdio.h>

// void squeeze(char s[], int c)
// {
//     int i, j;
//     for (i = j = 0; s[i] != '\0'; i++)
//         if (s[i] != c)
//             s[j++] = s[i];
//     s[j] = '\0';
// }
// int main()
// {
//     char  c[]="Hello";
//     squeeze(c,'l');
//     printf("%s\n",c);
// }
#include <stdio.h>

void strcat(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
}
int main()
{
    char hello[12] = "Hello,";  //minimum hello[12]
    char world[] = "World";
    strcat(hello, world);
    printf("%s \n", hello);
}

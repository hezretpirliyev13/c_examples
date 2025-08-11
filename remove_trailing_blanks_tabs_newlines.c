// This is searching at the end till the characters  except whitespace characters(' ' '\t' '\n')
#include <stdio.h>
#include <string.h>

int trim(char s[])
{
    int n;
    for (n = strlen(s) - 1; n >= 0; n--)
    {
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    }
    s[n + 1] = '\0';
    return n;
}
int main()
{
    char s[] = "Hello World!\n\t How are you doing?\n";
    printf("%s\n", s);
    __uint8_t n = trim(s);
    printf("%d\n", n);
}

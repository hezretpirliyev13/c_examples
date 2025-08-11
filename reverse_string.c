#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
int main()
{
    char text[]="Hello";
    printf("%s\n",text);

    reverse(text);

    printf("%s \n",text);

}
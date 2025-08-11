#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("/home/hp/Documents/new/data.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        goto error;
    }
    fclose(fp);
    return 0;
error:
    printf("%d\n", 0b0000010001010111 >> 2);
    return 1;
}

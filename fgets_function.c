#include <stdio.h>
#define path "/home/hp/cpp_compile_manual.txt"
int main()
{

    char buffer[100];
    int n = sizeof(buffer) / sizeof(buffer[0]);
    FILE *fp = fopen(path, "r");
    if (fp == NULL)
    {
        printf("Error: Could not open file '%s'\n", path);
        return 1;
    }
    if (fgets(buffer, n, fp))
    {
        printf("Text:%s\n", buffer);
    }
    else
        printf("Oh sorry an error  occured during the process\n");
    fclose(fp);
    return 0;
}
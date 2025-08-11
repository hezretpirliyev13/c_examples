#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
                goto end;
            printf("i = %d j = %d\n", i, j);
        }
    }
end:
    printf("Excited the nested loop\n");
    return 0;
}
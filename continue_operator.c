#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, -1, -2, 4, 5, 6, 7, 8};
    int n = sizeof(array) / sizeof(array[0]), j, negative = 0;
    int quantity = 0;
    printf("Original Array = ");
    for (j = 0; j < n; j++)
    {
        printf("%d ", array[j]);
    }
    printf("\nNew Array = ");

    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            // printf("%d\t", array[i]);
            quantity++;
            continue;                      // control goes back to the loop increment step(i++) and next iteration begins
        }
        printf("%d\t", array[i]);
    }
    printf("\nThe quantity of negative numbers = ");
    printf("%d\n",quantity);
    printf("\n");
}
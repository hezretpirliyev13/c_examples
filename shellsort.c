#include <stdio.h>

void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
}
int main()
{
    int array[] = {12, 4, 3, 1, 0, 5, 2, 10, 9, 5, -1};
    int n = sizeof(array) / sizeof(array[0]);
    printf("Original Array = ");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);

    printf("\nSorted Array = ");
    shellsort(array, n);

    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");
    return 0;
}
#include <stdio.h>

int binsearch(int *x, int v[], int *n)
{
    int low, high, mid;

    low = 0;
    high = *n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (*x < v[mid])
            high = mid - 1;
        else if (*x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};  //array should be sorted(ascending or descending)
    int output, desired_value = 60, n = 10;
    output = binsearch(&desired_value, array, &n);
    printf("%d\n", output);
}
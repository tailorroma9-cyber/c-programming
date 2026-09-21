#include <stdio.h>

int maximum(int a[], int n)
{
    int i, max = a[0];

    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    return max;
}

int main()
{
    int a[10], i;

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("Maximum=%d", maximum(a, 10));

    return 0;
}

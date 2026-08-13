// enrollment number 92500527175
// Write a program to find Minimum and maximum numbers from the given array WITHOUT using Recursion.

#include <stdio.h>

void main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\n Enter elements:");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("\n Minimum = %d", min);
    printf("\n Maximum = %d", max);
}

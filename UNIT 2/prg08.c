// enrollment number 92500527175
// 8. Write a program to find Minimum and Maximum numbers from the given array using Recursion.

#include<stdio.h>

void findMinMax(int arr[],int n, int index, int *min, int *max);

void main()
{

    int array[100], n, i;
    int min, max;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter %d elements : ",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    min = max = array[0];

    findMinMax(array, n, 1, &min, &max);

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

}

void findMinMax(int array[], int n, int index, int *min, int *max)
{
    if (index == n)
    {
        return;
    }

    if (array[index] < *min)
    {
        *min = array[index];
    }

    if(array[index] > *max)
    {
        *max = array[index];
    }

    findMinMax(array, n, index + 1, min, max);
}

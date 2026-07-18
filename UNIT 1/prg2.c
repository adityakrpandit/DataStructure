/* Enrollment No: 92500527175 */

#include <stdio.h>

void main()
{
    int a[10], i, n, sum = 0;
    float avg;

    printf("Enter the limit : ");
    scanf("%d", &n);

    if(n > 10 || n <= 0)
    {
        printf("Invalid limit! Please enter a value between 1 and 10.");
        return 0;
    }

    printf("\nEnter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);

        sum = sum + a[i];
    }

    printf("\nArray Elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    avg = (float)sum / n;

    printf("\n\nSum = %d", sum);
    printf("\nAverage = %.2f", avg);

    return 0;
}

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i, sum = 0, avg;
    printf("Enter 10 values into the array: ");
    for(i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The array elements are: ");
    for(i = 0; i <= 9; i++)
    {
        printf("%d\t", a[i]);
    }

    for(i = 0; i <= 9; i++)
    {
         sum += a[i];
    }

    avg = sum/10;

    printf("\n");
    printf("The sum of the numbers stored in the array is: %d", sum);
    printf("\n");
    printf("The average of sum of the numbers is: %d", avg);

    return 0;
}

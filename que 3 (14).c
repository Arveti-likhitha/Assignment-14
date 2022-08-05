#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i, sum_even = 0, sum_odd = 0;
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
         if(a[i] % 2 ==0)
         {
              sum_even += a[i];
         }
         else
         {
              sum_odd += a[i];
         }
    }

    printf("\n");
    printf("The sum of all even numbers stored in the array is: %d", sum_even);
    printf("\n");
    printf("The sum of all odd numbers stored in the array is: %d", sum_odd);

    return 0;
}

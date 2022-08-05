#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i, l, large;
    printf("Enter the 10 array values: ");
    for(i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    printf("The array elements are: ");
    for(i = 0; i <= 9; i++)
        printf("%d\t", a[i]);

    l = a[0];
    for(i = 1; i <= 9; i++)
    {
        if(a[i] > l)
        {
            large = a[i];
            l = a[i];
        }
        else
        {
            large = a[0];
        }

    }
        printf("\n");
        printf("The largest number of all the numbers in the array is: %d", large);


    return 0;
}

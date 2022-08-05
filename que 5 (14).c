#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i, s, small;
    printf("Enter the 10 array values: ");
    for(i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    printf("The array elements are: ");
    for(i = 0; i <= 9; i++)
        printf("%d\t", a[i]);

    s = a[0];
    for(i = 1; i <= 9; i++)
    {
        if(a[i] <= s)
        {
            small = a[i];
            s = a[i];
        }
    }
        printf("\n");
        printf("The smallest number of all the numbers in the array is: %d", small);


    return 0;
}


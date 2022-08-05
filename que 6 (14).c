#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i, j, k;
    printf("Enter the 10 values of the array: ");
    for(i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    printf("The array elements are: ");
    for(i = 0; i <= 9; i++)
        printf("%d\t", a[i]);

    for(i = 0; i <= 9; i++)
    {
        for(j = i+1; j <= 9; j++)
        {
            if(a[i] < a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }


    printf("\n");
    printf("The ascending order of the entered numbers is: ");
    for(i = 0; i <= 9; i++)
        printf("%d\t", a[i]);


    return 0;
}

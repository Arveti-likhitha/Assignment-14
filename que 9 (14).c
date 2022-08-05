#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    int* a;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements into the array: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("The array elements are: ");
    for(i = 0; i < n; i++)
        printf("%d\t", a[i]);

    printf("\n");
    printf("The reverse order of the above array is: ");
    for(i = n-1; i >= 0; i--)
        printf("%d\t", a[i]);


    return 0;
}

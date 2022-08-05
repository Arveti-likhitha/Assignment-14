#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    int* a;
    int* b;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements into the array: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("The array elements are: ");
    for(i = 0; i < n; i++)
        printf("%d\t", a[i]);

    for(i = 0; i < n; i++)
        b[i] = a[i];

    printf("The copied array is: ");
    for(i = 0; i < n; i++)
        printf("%d\t", b[i]);


    return 0;
}

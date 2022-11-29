#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 20
int main()
{
    int a[max], i, j;
    printf("-: Created By RAJAN RAJBHAR :-\n \t Delete an element in the array From First Position Program:\n\n");
    printf("Enter the size of array: ");
    scanf("%d", &j);
    if (j >= max)
    {
        printf("Array size doesn't exit ");
        exit(0);
    }
    printf("Input the elements of array: \n");
    for (i = 0; i < j; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements of array after deletion at beginning: \n");
    j--;
    for (i = 0; i < j; i++)
    {
        a[i] = a[i + 1];
        printf("%d\n", a[i]);
    }
    return 0;
}

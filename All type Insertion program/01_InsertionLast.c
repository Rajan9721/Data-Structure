/*Inserting element at the End*/
#include <stdio.h>
#include <conio.h>
#define max 20
void main()
{
	int a[max], i, j, n;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Insertion at the End Program:\n\n");
	printf("Enter limit of array: ");
	scanf("%d", &j);
	if (j >= max)
	{
		printf("-: Size limit cross :-");
		
	}
	printf("Enter element of array: ");
	for (i = 0; i < j; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d", &n);
	a[j] = n;
	for (i = 0; i <= j; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}
	getch();
}

#include <stdio.h>
#include <conio.h>
#define max 20
void main()
{
	int a[max], i, j, n;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Insertion at the First position Program:\n\n");
	printf("Enter limit of array: ");
	scanf("%d", &j);
	if (j >= max)
	{
		printf("Size limit cross: ");
		exit(0);
	}
	printf("Enter element of array: ");
	for (i = 0; i < j; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be inserted of first Position: ");
	scanf("%d", &n);
	for (i<j; i> 0; i--)
	{
		a[i] = a[i - 1];
	}
	a[0] = n;

	for (i = 0; i <= j; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}
	getch();
}

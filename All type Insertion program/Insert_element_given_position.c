#include<stdio.h>
#include<conio.h>
#define max 20
void main()
{
	int a[max], i, j, p,n;
	printf("Enter limit of array: ");
	scanf("%d", &j);
	if(j>=max)
	{
		printf("Size limit cross: ");
	
	}
	printf("Enter element of array: ");
	for(i=0; i<j; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d", &n);
	printf("Enter the position of element where you want to insert: ");
	scanf("%d",&p);
	for(i<j; i>p; i--)
	{
		a[i]=a[i-1];
	}
	a[p]=n;
	
	for(i=0; i<=j; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}
getch();	
}

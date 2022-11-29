/* Deletion of an element of given position*/
#include<stdio.h>
#define max 20
int main()
{
	int a[max], i, size, pos;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Deletion of an element of given position Program:\n\n");
	printf(" Enter Limit of the array: ");
	scanf("%d", &size);
	if(size>=max)
	{
		printf("Array size doesn't exit ");
	    exit(0);
	}
	printf("Enter the element of the array:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the position where you want to delete element :\n");
	scanf("%d",&pos);
	size--;
	if(pos>size)
	{
		printf("Deletion not pass: \n");
	}
	else
	{
		for(i=(pos-1); i<(size); i++)
		{
			a[i]=a[i+1];
		}
		printf("After deletion Number is:\n");
	for(i=0; i<(size); i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	}
	getch();
}



#include<stdio.h>
#define max 20
void main()
{
	int a[max],i,j,n,temp;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Bubble Sort Program:\n\n");
	printf("Enter The Size of array: ");
	scanf("%d", &n);
	printf("Enter the Element of the array: ");
	for(i=0; i<n; i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted Element are: \n");
	for(i=0; i<n; i++)
	{
		printf("%d \n", a[i]);
	}
	getch();
}

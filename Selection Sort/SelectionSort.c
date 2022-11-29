/* Selection sort*/
#include<stdio.h>
#define max 20
void main()
{
	int a[max],i,j,n,min;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Selection Sort Program:\n\n");
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter The Element of the array: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		
	}
	
	printf("After Selection Sort Elements are: \n");
	for(i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	
	}
getch();
}

/* Intiortion short*/
#include<stdio.h>
#define max 20
void main()
{
	int a[max],i,j,key,n;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Insertion Sort Program:\n\n");
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter The Element of the array: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1; i<n; i++)
	{
		key=a[i];
		j=i-1;
		while(key<a[j] && j>=0)
		{
			
			a[j+1]=a[j];
			j=j-1;
		}
	a[j+1]=key;
	}
	printf("After Insertion sort Elements are: \n");
	for(i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	
	}
getch();
}

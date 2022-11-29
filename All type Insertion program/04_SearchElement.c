#include <stdio.h>
#define max 20
void main()
{
	int a[max], i, j, n , s;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Search element in the array Program:\n\n");
	printf("Enter Size of array: ");
	scanf("%d", &j);
	if(j>=max)
	{
		printf("Size limit cross: ");
		exit(0);
	}
	printf("Enter element of array: ");
	for(i=0; i<j; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter element that you want to search: ");
	scanf("%d", &s);
	for(i=0; i<j; i++)
	{
		if(a[i]==s)
		{
			printf("Element found at position : %d", i+1);
			break;
		}
		
	}
	if(a[i]!=s)
		{
			printf("Element not found");
		}
	
getch();	
}

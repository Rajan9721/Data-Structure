#include<stdio.h>
#define max 20
int main()
{
	int i, a[max], l,h,size,m,key;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Binary Search Program:\n");
	printf("Enter Size of Array: ");
	scanf("%d", &size);
	printf("Enter The Element of array: ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter The element you want to Search:");
	scanf("%d",&key);
	l=0;
	h=size-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(key==a[m])
		{
			printf("Element Found at Position: %d", m+1);
			break;
		}
		else if(key<a[m])
		{
			h=m-1;
		}
		else if(key>a[m])
		{
			l=m+1;
		}
	}
	if(key!=a[m])
	{
		printf("Element Not Found:");
		
	}
getch();	
}

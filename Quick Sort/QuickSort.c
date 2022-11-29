#include<stdio.h>
#define max 20
void quick(int A[], int l, int h)
{
	int c, i;
	if(i<h)
	{
		c=partition(A, l, h);
		quick(A, l, c-1);
		quick(A, c+1, h);
		
	}
}
partition(int A[], int l, int h)
{
	int j,n,temp;
	int p=A[l];
	int i=l+1;
 	j=h;	
}
while(i<j)
{
	while(A[i]<=p)
	{
		i++;
	}
	while(A[j]>p)
	{
		j--;
	}
	if(i<j)
	{
		temp=A[l];
		A[l]=A[j];
		A[j]=temp;
		return j;
	}
}


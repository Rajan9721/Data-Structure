#include<stdio.h>
#define max 20
int i,j,k;
MERGE(int a[],int l, int mid, int h)
{
	int i=0,j=0,k=1;
	int n1 = mid - l  + 1;
	int n2 = h - mid;
	int A[n1], B[n2];
	for(i=0; i<n1; i++)
	{
		A[i]=a[l+i];
		i++;
	}
	for(j=0; j<n2; j++)
	{
		B[j]=a[mid+1+j];
		i++;
	}
	
	
	while(i<n1 && j<n2)
	{
		if(A[i]<=B[j])
		{
			a[k]=A[i];
			i++;
			k++;
		}	
		else
		{
			a[k]=B[j];
			j++;
			k++;
		}
		
	}
	while(i<n1)
	{
		a[k]=A[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=B[j];
		k++;
		j++;
	}	
}
MERGESORT(int a[], int l, int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		MERGESORT(a, l, mid);
		MERGESORT(a,mid+1,h);
		MERGE(a, l, mid, h);
	}
	
}
int main()
{
	int size, a[max],i,k;
	printf("\nEnter The Size of array: ");
	scanf("%d",&size);
	printf("\nEnter The Element: ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	
	MERGESORT(a, 0, size - 1);
	
	for(i=0; i<size; i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;	
}



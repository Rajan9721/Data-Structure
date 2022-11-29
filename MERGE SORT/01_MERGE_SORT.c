#include <stdio.h>
#include <stdlib.h>
#define max 60
int i, l, j, k; 
void merge(int a[], int l, int mid, int h)
{
	int i, j, k;
	int n1 = mid -l + 1;
	int n2 = h - mid;
	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (j = 0; j < n2; j++)
		R[j] = a[mid + 1 + j];

	
	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) 
	{
		if (L[i] <= R[j]) 
		{
			a[k] = L[i];
			i++;
			k++;
		}
		else 
		{
			a[k] = R[j];
			j++;
			k++;
		}
		
	}
	while (i < n1) 
	{
		a[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) 
	{
		a[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int a[], int l, int h)
{
	if (l < h) 
	{
		int mid = (l + h)/ 2;
		mergeSort(a, l, mid);
		mergeSort(a, mid + 1, h);
		merge(a, l, mid, h);
	}
}
void main()
{
	int a[max], i, size;
	printf("-: Created By RAJAN RAJBHAR :-\n     Merge Sort Program:\n");
	printf("Enter Array Size: ");
	scanf("%d", &size);
	printf("\nEnter Array Elements: ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}

	mergeSort(a, 0, size-1);

	printf("\nSorted array is \n");
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\t");
	getch();
}


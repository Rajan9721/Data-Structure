#include<stdio.h>

int main()
{
	InsertionSort(a,n);
	printArrray(a,n);
	return 0;
}
void InsertionSort(int a[], int n){
	int i, key, j;
	for(i=1; i<n; i++){
		key= a[]
		j=j-1;
		while(j>=0 && key<a[j]){
			a[j+1]=a[j]
			j=j-1;
		}
		a[j+1]=key;
	}
}
void printArray(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d \n",a[i]);
	}
}

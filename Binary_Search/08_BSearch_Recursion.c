#include <stdio.h>
int BinarySearch(int a[], int l, int h, int key){
   if (h >= l)
   {
      int m = (l+h)/2;
      if (a[m] == key)
         return m+1;
      if (a[m] > key)
         return BinarySearch(a, l, m-1, key);
      return BinarySearch(a, m+1, h, key);
   }
   return -1;
}
int main()
{
   int a[20],i,n,key;
   printf("-: Created By RAJAN RAJBHAR :-\n \t Binary Search Recursion Program:\n\n");
   printf("Enter size of array: ");
   scanf("%d", &n);
   printf("Enter element of the array: ");
   for(i=0; i<n; i++)
   {
   	scanf("%d", &a[i]);
   }
   printf("Enter the element for search position: ");
   scanf("%d", &key);
   int found_index =BinarySearch(a, 0, n-1, key);
   if(found_index == -1 ) 
   {
      printf("Element not found in the array ");
   }
   else 
   {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}

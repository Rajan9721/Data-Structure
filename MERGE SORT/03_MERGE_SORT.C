#include <stdio.h>

#define max 10

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void MERGE(int L, int mid, int H) 
{
   int n1, n2, i;
   n1 = L, n2 = mid + 1;
   for(i = L; n1 <= mid && n2 <= H; i++) 
   {
      if(a[n1] <= a[n2])
         b[i] = a[n1++];
      else
         b[i] = a[n2++];
   }
   
   while(n1 <= mid)    
      b[i++] = a[n1++];

   while(n2 <= H)   
      b[i++] = a[n2++];

   for(i = L; i <= H; i++)
      a[i] = b[i];
}

void MSORT(int L, int H) 
{
   int mid;
   if(L < H) 
   {
      mid = (L + H) / 2;
      MSORT(L, mid);
      MSORT(mid+1, H);
      MERGE(L, mid, H);
   } 
   else 
   { 
      return;
   }   
}

int main() 
{ 
   int i;

   printf("List before sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

	MSORT(0, max);

   printf("\nList after sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}

/*Quick Sort*/
#include<stdio.h>
#define max 20
void quicksort(int a[20],int l ,int h)
{
   int i, j, pi, temp;

   if(l<h)
   {
      pi=l;
      i=l;
      j=h;

      while(i<j)
	  {
         while(a[i]<=a[pi])
            i++;
         while(a[j]>a[pi])
            j--;
         if(i<j)
		 {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }

      temp=a[pi];
      a[pi]=a[j];
      a[j]=temp;
      quicksort(a,l,j-1);
      quicksort(a,j+1,h);

   }
}

int main()
{
   int i, n, a[max];
   printf("-: Created By RAJAN RAJBHAR :-\n \tQuick Sort Program:\n");
   printf("Enter the size of the array: ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   quicksort(a, 0, n-1);

   printf("Sorted elements are: ");
   for(i=0; i<n; i++)
      printf(" %d",a[i]);

   return 0;
}

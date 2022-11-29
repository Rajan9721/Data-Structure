#include<stdio.h>
#define max 20
int a[max];
QSORT(int a[20],int l ,int h)
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
      QSORT(a,l,j-1);
      QSORT(a,j+1,h);

   }
}
BSORT(int a[max],int i,int n)
{
	int j,temp;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Bubble Sort:\n\n");
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	/*printf("Sorted elements are: ");
   	for(i=0; i<n; i++)
   	{
      	printf(" %d",a[i]);
	}*/
}
ISORT(int a[max],int i,int n)
{
	int j,key;
	
	/*printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter The Element of the array: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}*/
	printf("-: Created By RAJAN RAJBHAR :-\n \t Insertion Sort:\n\n");
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
}
SSORT(int a[max],int i,int n)
{
	int j,min;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Selection Sort:\n\n");
	/*printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter The Element of the array: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}*/
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
		
	}
}
void main()
{
	int ch,n,i,a[max];
	printf("-: Created By RAJAN RAJBHAR :-\n \t Sorting Programs:\n\n");
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter The Element of the array: ");
	for(i=0; i<n; i++)
	{
		scanf(" %d",&a[i]);
	}
	do
	{
		printf("\nEnter Your Choice: \n");
		printf("1. Quick Sort: \n");
		printf("2. Bubble Sort: \n");
		printf("3. Insertion Sort: \n");
		printf("4. Selection Sort: \n");
		printf("5. Exit Our Program: \n");
		scanf("%d", &ch);
		printf("Your Choice Is %d\n", ch);
		switch(ch)
		{
			case 1:
				QSORT(a, 0, n-1);
				printf("-: Created By RAJAN RAJBHAR :-\n \t Quick Sort:\n\n");
				printf("Sorted elements are: ");
   				for(i=0; i<n; i++)
      				printf(" %d",a[i]);
				printf("\n");
				getch();
				break;
			case 2:
				BSORT(a,0,n);
				printf("Sorted elements are: ");
   				for(i=0; i<n; i++)
      				printf(" %d",a[i]);
      			printf("\n");
				getch();
				break;
			case 3:
				ISORT(a,0,n);
				printf("Sorted elements are: ");
   				for(i=0; i<n; i++)
      				printf(" %d",a[i]);
				printf("\n");
				getch();
				break;
			case 4:
				SSORT(a,0,n);
				printf("Sorted elements are: ");
   				for(i=0; i<n; i++)
      				printf(" %d",a[i]);
				printf("\n");
				getch();
				break;
			case 5:
				printf("\n");
				printf("Program Exited:");
				break;
			default:
			{
				printf("\n");
				printf("Invalid Input:");
				break;
			}	
		}
	}while(ch!=5);
}

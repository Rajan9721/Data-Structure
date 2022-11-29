#include<stdio.h>
#include<conio.h>
#define max 30
void I_E_G_POSITION()
{
	int a[max], i, j, p,n;
	printf("Enter limit of array: ");
	scanf("%d", &j);
	/*if(j>=max)
	{
		printf("Size limit cross: ");
	
	}*/
	printf("Enter element of array: ");
	for(i=0; i<j; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d", &n);
	printf("Enter the position of element where you want to insert: ");
	scanf("%d",&p);
	for(i<j; i>p; i--)
	{
		a[i]=a[i-1];
	}
	a[p]=n;
	
	for(i=0; i<=j; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}	
}
void INSERT_First_POS()
{
	int a[max], i, j, n;
	printf("Enter limit of array: ");
	scanf("%d", &j);
	/*if(j>=max)
	{
		printf("Size limit cross: ");
		exit(0);
	}*/
	printf("Enter element of array: ");
	for(i=0; i<j; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be inserted of first Position: ");
	scanf("%d", &n);
	for(i<j; i>0; i--)
	{
		a[i]=a[i-1];
	}
	a[0]=n;
	
	for(i=0; i<=j; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}	
}
void Insert_Last_POS()
{
	int a[max], i, j, n;
	printf("Enter limit of array: ");
	scanf("%d", &j);
	/*if(j>=max)
	{
		printf("-: Size limit cross :-");
		exit(0);
	}*/
	printf("Enter element of array: ");
	for(i=0; i<j; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d", &n);
	a[j]=n;
	
	for(i=0; i<=j; i++)
	{
		printf("%d", a[i]);
		printf("\n");
	}	
}
void Del_Beg()
{
	int a[max],i,j;
	printf ("\t Enter the size of array: ");
	scanf ("%d",&j);
	/*if(j>=max)
	{
		printf("\t Array size doesn't exit ");
		exit(0);
	}*/
	printf ("\t Input the elements of array: \n");
	for(i=0; i<j; i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("\t Elements of array after deletion at beginning: \n");
	j--;
	for(i=0;i<j;i++)
	{
    	a[i]=a[i+1];
    	printf("%d \t ",a[i]);
	}
}
void main()
{
	int ch;
	printf("-: Created By RAJAN RAJBHAR :-\n \t Insertion Programs:\n\n");
	/*printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter The Element of the array: ");
	for(i=0; i<n; i++)
	{
		scanf(" %d",&a[i]);
	}*/
	do
	{
		printf("\nEnter Your Choice: \n");
		printf("Click 1 For Insert An Element at The Given Position:\n \n");
		printf("\tClick 2 For Insert an Element at First Position: \n\n");
		printf("Click 3 For Insert an Element at Last Position: \n\n");
		printf("\tClick 4 For Delete An Element Form Bigning: \n\n");
		printf("CLick 5 For Exit Our Program: \n");
		scanf("%d", &ch);
		printf("Your Choice Is %d\n", ch);
		switch(ch)
		{
			case 1:
				I_E_G_POSITION();
				getch();
				break;
			case 2:
				INSERT_First_POS();
				getch();
				break;
			case 3:
				Insert_Last_POS();
				getch();
				break;
			case 4:
				Del_Beg();
				getch();
				break;
			case 5:
				printf("Program Exited:");
				break;
			default:
			{
				printf("Invalid Input:");
				break;
			}	
		}
	}while(ch!=5);
}

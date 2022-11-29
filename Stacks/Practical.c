#include <stdio.h>
int st[100], i, j, ch = 0, top = -1;
void push()
{
	int item;
	if (top == n+1)
	{
		printf("\n**********Stack is Full**********\n");
	}	
	else
	{
		printf("\nEnter the Element: ");
		scanf("%d", &item);
		top = top + 1;
		st[top] = item;
	}
}
void pop()
{
	if (top == -1)
		printf("\n**********STACK is Empty*********\n");
	else
		top--;
}
void display()
{
	for (i = top; i >= 0; i--)
	{
		printf("\nElements are: ");
		printf("%d\n", st[i]);
	}
	if (top == -1)
	{
		printf("\n**********STACK is Empty*********\n");
	}
}
void main()
{
	int n;
	printf("******Created By Rajan Rajbhar***** \n    *********Stack Operations*********");
	printf("\n\nEnter the number of elements in the stack:");
	scanf("%d", &n);
	while (ch != 4)
	{
		printf("\nEnter Your Choice: \n");
		printf("\n 1.Push\n 2.Pop\n 3.display\n 4.Exit\n");
		
		scanf("%d", &ch);
		printf("\n Your choice is: %d",ch);
		printf("\n");
		switch (ch)
		{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			printf("Exited the program\n");
			break;
		}
		};
	}
}

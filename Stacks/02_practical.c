#include<stdio.h>
#define size 20
int s[size];
int top=-1;
int n, i, ch=0;
struct stack
{
	int s[size];
	int top;
}st;
int isempty()
{
	if(st.top==-1)
	{
		return 1;
	}
	else
	{
		return 0;	
	}
}
int isfull()
{
	if(st.top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
void push(item)
{
	st.top++;
	st.s[st.top]=item;
}
void pop()
{
	int item;
	item=st.s[st.top];
	st.top--;
	return item;
}
void display()
{
	if(isfull())
	{
		printf("No element in the Stack:");
	}
	else
	{
		for(i=st.top; i>=0; i--)
		{
			printf("%d", st.s[i]);
		}
	}
}
void main()
{
	int item;
do
{
	printf(" Chose One From Below");
	printf(" Click 1 For Push:\n Click 2 For POP\n Click 3 For Dispalay,\n Click 4 For Exit");
	printf("\n Enter Your Choice:");
	scanf("%d", &ch);
	swich(ch)
	{
		case 1:
			printf("Enter elemnts: ");
			scanf("%d", &item);
			if(isfull())
			{
				printf("Stack Is Full");
			}
			else
			{
				push(item);
			}
			break
	};
}while(ch!=2)

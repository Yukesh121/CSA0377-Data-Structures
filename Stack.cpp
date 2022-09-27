#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stk[size];
	void push()
	{
		int ele;
		printf("Enter the element to be pushed :");
		scanf("%d",&ele);
		if(top==size-1)
		{
			printf("The stack is full");
		}
		else
		{
			top=top+1;
			stk[top]=ele;
			printf("The top of the stack :%d",ele);
		}
	}
	void pop()
	{
		int ele;
		if(top==-1)
		{
			printf("The stack is empty");
		}
		else
		{
			ele=stk[top];
			top=top-1;
			printf("The deleted element is %d",ele);
		}
	}
	void peek()
	{
		int ele;
		if(top==-1)
		{
			printf("The stack is empty");
		}
		else
		{
			printf("The top element is :%d",stk[top]);
		}
	}
	void display()
	{
		int i;
		if(top==-1)
		{
			printf("The stack is empty");
		}
		else
		{
			for(i=top;i>=0;i--)
			{
				printf("The stack is%d\n",stk[i]);
			}
		}
    }
	int main()
	{
		int ch;
		do
		{
			printf("\nMain menu :\n");
			printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
			printf("\nEnter you choice :");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
				    push();
				    break;
				case 2:
				    pop();
				    break;
				case 3:
				    peek();
				    break;
				case 4:
				    display();
				    break;
				case 5:
				    exit(0);
			}
		}
		while(ch>0 && ch<=5);
		return 0;
	}


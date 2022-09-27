#include<stdio.h>
#include<stdlib.h>
#define size 5
int f=-1,r=-1,que[size];
void enqueue()
{
		int n;
		printf("Enter the element :");
		scanf("%d",&n);
		if(r==size-1)
		printf("The queue is full");
		else
		{
			if(f==-1 && r==-1)
			{
				f=r=0;
			}
			else
			r=r+1;
			que[r]=n;
		}
}
	void dequeue()
	{
		int n;
		if(f==-1 && r==-1)
		printf("Queue is empty");
		else
		{
			n=que[r];
			if(f==r)
			{
				f=-1;
				r=-1;
			}
			else
			f=f+1;
			printf("the deleted element is =%d",n);
		}
	}
     void display()
	{
		int i;
		if(f==-1 && r==-1)
		printf("Queue is empty");
		else
		{
			for(i=f;i<=r;i++)
			{
				printf("%d\t",que[i]);
			}
		}
	}
	int main()
{
	int ch;
	do
	{
		printf("\nMain menu :\n");
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter a choice :");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Enter a valid input");
		}
	}while(ch>0 && ch<=4);
	return 0;		
}


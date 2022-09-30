#include<stdio.h>
#include<stdlib.h>
#define size 100
int a[size],n=5;
void create()
{
	int i;
	printf("enter the array elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void Insertion()
{	int n1,n2,i,pos,ele;
		printf("Enter the element and the position :");
		scanf("%d%d",&n1,&n2);
		for(i=n-1;i>=pos;i--)
		{
		    a[i]=a[i-1];
		    a[pos]=ele;
	    }
}
	void Deletion()
	{
		int i,pos;
		printf("enter the position :");
		scanf("%d",&pos);
		for(i=pos;i<n-1;i++)
		a[i]=a[i+1];
	}
     void display()
	{
		int i;
		printf("The elements are :");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	}
	int main()
{
	int ch;
	do
	{
		printf("\nMain menu :\n");
		printf("\n1.Create\n2.Insertion\n3.Deletion\n4.Display\n5.Exit\n");
		printf("Enter a choice :");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				create();
				break;
			case 2:
				Insertion();
				break;
			case 3:
				Deletion();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("Enter a valid input");
		}
	}while(ch>0 && ch<=4);
    return 0;
}		

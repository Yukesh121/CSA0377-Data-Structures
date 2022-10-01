#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL,*p,*t,*newnode;
void create()
{
	int x,n,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the values :","\n");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}
void insertatbegin()
{
	int x;
	printf("Enter the values :","\n");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		p=head;
		head=newnode;
		newnode->next=p;
		p=newnode;
	
}
void insertatanypos()
{
	int x,pos,y,i;
	printf("Enter the  element and position:","\n");
		scanf("%d%d",&x,&pos);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		for(p=head,i=1;i<pos;p=p->next,i++)
		t=p;
		t->next=newnode;
		newnode->next=p;
		newnode=p;
}
void insertatend()
{
	int x;
	printf("Enter the values :","\n");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
}
void deleteatbegin()
{
    int x;
    p=head;
    head=p->next;
    x=p->data;
    free(p);
    printf("the deleted element is:%d",x);
}
void deleteatend()
{
    int x;
    for(p=head;p->next!=NULL;p=p->next)
    t=p;
    t->next=NULL;
    x=p->data;
    free(p);
    printf("the deleted element is:",x);
}
void deleteatanypos()
{
	int x,pos,i;
	printf("enter the position :");
	scanf("%d",&pos);
	for(i=1,p=head;i<pos;i++,p=p->next)
	t=p;
	t->next=p->next;
	x=p->data;
	free(p);
	printf("the deleted element is:",x);
}

void display()
{
	if(head==NULL)
	printf("Single linked list ins empty");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d->",p->data);
}
int main()
{
	int ch;
	do
	{
		printf("\nMain menu :\n");
		printf("\n1.Create\n2.Display\n3.Insert at begin\n4.Insert at end\n5.insert at any position\n6.Delete at begin\n7.Delete at end\n8.Delete at any position\n9.Exit(0)");
		printf("Enter a choice :");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				insertatbegin();
				break;
			case 4:
				insertatend();
				break;
			case 5:
				insertatanypos();
				break;
			case 6:
				deleteatbegin();
				break;
			case 7:
				deleteatend();
				break;
			case 8:
				deleteatanypos();
				break;
			case 9:
				exit(0);
			default:
				printf("Enter a valid input");
		}
	}while(ch>0 && ch<=9);
	return 0;		
}


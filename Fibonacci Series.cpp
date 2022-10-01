#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,c,m=0,n=1;
	printf("Enter a number :");
	scanf("%d",&a);
	if(a==0)
	{
		return 0;
	}
	else if(a==1)
	{
		return 1;
	}
	else
	{
		printf("%d\t%d\t",m,n);
		for(i=2;i<=a;i++)
		{
		c=m+n;
		m=n;
		n=c;
		printf("%d\t",c);
        }
	}
}
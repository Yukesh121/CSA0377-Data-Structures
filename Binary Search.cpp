#include<stdio.h>
#include<conio.h>
int main()
{
	int n,b,a[100],f,l,i,mid,s,flag=0;
	printf("enter the no of elements in array :");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be searched :");
	scanf("%d",&s);
	f=a[0];
	l=i-1;
    while(n>0)
    {
    	mid=f+l/2;
    	if(mid==s)
        {
    	    flag=1;
    	    if(flag==1)
    	    {
    	    	break;
    	    }
    	    else
    	    {
    	    	flag==0;
    	    	break;
			}
	    }
	    else if(mid>s)
	    {
		    l=mid-1;
	    }
	    else if(mid<s)
	    {
		    f=mid+1;
	    }break;
	}
	if(flag==1)
	{
		printf("The element is found");
	}
	else
	{
		printf("The element is not found");
	}return 0;
}
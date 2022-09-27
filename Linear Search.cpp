#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a[100],c,s;
	printf("Enter number of elements in array :\n");
    scanf("%d", &n);
    printf("Enter %d integer(s)\n", n);
    for(c=0;c<n;c++)
    {
    	scanf("%d",&a[c]);
	}
	printf("enter the number to be searched :");
	scanf("%d",&s);
	for(c=0;c<n;c++)
	{
		if(s==a[c])
		{
		printf("\nElement is found!");
		break;
	    }
	}
	if(c==n)
	{
		printf("\nElement is not found!");
	}return 0;
	
}
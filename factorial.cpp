#include<stdio.h>
int main()
{
	int i,f=1,n;
	printf("enter the element: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of %d is: %d",n,f);
	return 0;
}

#include<stdio.h>
int main()
{
	int i,a=0,b=1,c=0,n;
	printf("enter the no.of values:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}

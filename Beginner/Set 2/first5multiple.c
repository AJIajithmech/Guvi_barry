#include<stdio.h>
void main()
{
	int n,s=1,i;
	scanf("%i",&n);
	for(i=1;i<=5;i++)
	{
		s=n*i;
		printf("%d ",s);
	}
}

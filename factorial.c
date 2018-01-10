#include<stdio.h>
void main()
{
	int n,s=1,i;
	scanf("%i",&n);
	for(i=n;i>0;i--)
	{
		s=s*i;
	}
	printf("%d",s);
}

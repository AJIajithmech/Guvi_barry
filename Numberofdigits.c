#include<stdio.h>
void main()
{
	int n,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		s++;
		n=n/10;
	}
	printf("%d",s);
}

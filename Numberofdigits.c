#include<stdio.h>
void main()
{
	int n,s=0;
	scanf("%i",&n);
	while(n>0)
	{
		s++;
		n=n/10;
	}
	printf("%i",s);
}

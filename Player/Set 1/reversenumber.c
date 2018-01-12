#include<stdio.h>
void main()
{
	int n;
	scanf("%i",&n);
	while(n)
	{
		printf("%i",n%10);
		n/=10;
	}
}

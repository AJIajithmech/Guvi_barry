#include<stdio.h>
void main()
{
	int n,s=0,r,o;
	scanf("%i",&n);
	o=n;
	while(n>0)
	{
		r=n%10;
		s=s*10 + r;
		n=n/10;
	}
	if(o==s)
		printf("yes");
	else
		printf("no");
}

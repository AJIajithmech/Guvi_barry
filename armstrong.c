#include<stdio.h>
#include<math.h>
void main()
{
	int n,c=0,r,s=0,o,p;
	scanf("%i",&n);
	o=n;
	p=n;
	while(p>0)
	{
		c++;
		p=p/10;
	}
	while(n>0)
	{
		r=n%10;
		s=s + pow(r,c);
		n=n/10;
	}
	if(s==o)
		printf("yes");
	else
		printf("no");
}

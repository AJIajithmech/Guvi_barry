#include<stdio.h>
#include<math.h>
void main()
{
	int n,c,r,s,o,p,q,m,i;
	scanf("%i %i",&n,&m);
	for(i=n+1;i<m;i++)
	{
		c=0;
		s=0;
		o=i;
		p=i;
		q=i;
		while(p>0)
		{
			c++;
			p=p/10;
		}
		while(q>0)
		{
			r=q%10;
			s=s + pow(r,c);
			q=q/10;
		}
		if(s==o)
			printf("%d ",o);
	}
}

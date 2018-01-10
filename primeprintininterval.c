#include<stdio.h>
void main()
{
   int i,j,f,n,p;
   scanf("%i %i",&n,&p);
    for(i=n+1;i<p;++i)
    {
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if((i % j) == 0)
			{
				f++;
				break;
			}
        }
		if(f==0)
			printf("%i ",i);
    }
}

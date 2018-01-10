#include<stdio.h>
void main()
{
   int n,p,i;
   scanf("%i %i",&n,&p);
   for(i=n+1;i<p;i++)
   {
   		if(i%2==0)
   			printf("%i ",i); 
   }
}

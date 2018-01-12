#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100],b[100];
	int i,l1,l2,c=0;
	scanf("%s %s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			
			if(a[i]!=b[i])
			{
				c=c+1;
			}
			
		}
		if(c==1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}

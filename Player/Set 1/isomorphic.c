#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	int i,l1,l2,a[256]={0};
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1!=l2)
	{
		printf("no");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(a[(int)s1[i]]!=0)
			{
				if(!(a[(int)s1[i]]==(int)s2[i]))
				{
					printf("no");
					exit(0);
				}
			}
				else
				{
					a[(int)s1[i]]=(int)s2[i];
				}
			}
			printf("yes");
		}
	return 0;
}

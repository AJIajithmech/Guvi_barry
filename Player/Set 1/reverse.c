#include <stdio.h>
#include<string.h>
void main()
{
	char a[100000];
	gets(a);
	int l=strlen(a)-1;
	while(l!=-1)
	{
		printf("%c",a[l]);
		l--;
	}
}

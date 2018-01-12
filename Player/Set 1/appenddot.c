#include<stdio.h>
#include<string.h>
void main()
{
	char c[100000];
	gets(c);
	int i=strlen(c);
	c[i]='.';
	c[i+1]='\0';
	puts(c);
}

#include<stdio.h>
void main()
{
	int n;
	scanf("%i",&n);
	if(n>0)
		printf("Positive");
	else if(n<0)
		printf("Negative");
	else if(n=0)
		printf("Zero");
	else
		printf("Invalid Input");
}

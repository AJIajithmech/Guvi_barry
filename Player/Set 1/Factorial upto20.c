#include <stdio.h>

long long int factorial(int N)
{
    long long ans = 1;
    int i;
    for(i=1; i <= N; i++)
    ans *= i;
    return ans;
}

int main()
{
    int t;
    scanf("%i",&t);
    if(t<=20)
    	printf("%lld\n", factorial(t));	
    else
    	printf("Invalid Input");
    return 0;
}

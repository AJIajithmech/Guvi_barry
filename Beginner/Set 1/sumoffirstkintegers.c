#include<stdio.h>
void main()
{
	int n,k,a[100000],s=0,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(k>0)
		{
			s+=a[i];
			k--;
		}
	}
	printf("%d",s);
}

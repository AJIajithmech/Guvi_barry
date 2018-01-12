#include<stdio.h>
#include<math.h>
void main()
{
   int num,i,FLAG=1;
   scanf("%d",&num);
   for(i=2;i<=sqrt(num);i++)
   {
      if(num%i == 0)
      {
         FLAG = 0;
         break;
      }
   }
   if(FLAG == 1)
   {
      printf("yes");
   }
   else
   {
      printf("no");
   }
}

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   int s,e,i,count=0;
   scanf("%d%d",&s,&e);
   while(s<=e)
   {
       for(i=2;i<=sqrt(s);i++)
       {
           if(s%i==0)
           {

               count++;
           }
       }
   }
   if(count==0)
   printf("prime");
   return 0;
}

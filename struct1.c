#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main()
{
     char s[100];
     int i,j,k ,n,count=0;
     scanf("%[^\n]s",s);
     for(i=0;s[i]!='\0';i++){
         n=0;
         if(isdigit(s[i]))
         {
             n=s[i]-'0';
             for(j=i+1;s[j]!='\0';j++)
             {
                 if(isdigit(s[j]))
                    n=n*10+s[j]-'0';
                 else{
                    i=j;
                    break;
                 }
             }
             for(k=2;k<=sqrt(n);k++)
             {
                 if(n%k==0)
                    count++;
             }
             if(count==0)
                printf("%d ",n);
         }
       }
    return 0;
}

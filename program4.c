#include<stdio.h>
int sum(int n,int s)
{

    if(n==0)
        return s;
    else if(n%2!=0){
        n=n-1;
         sum(n,s);
    }else
    {
        s=s+n;
    sum(n-2,s);
    }
}

int main()
{
int n,sum1=0;
scanf("%d",&n);
sum1=sum(n,sum1);
printf("%d",sum1);
return 0;



}

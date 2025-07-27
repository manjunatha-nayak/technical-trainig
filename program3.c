#include<stdio.h>

int check(int n)
{
    int result;
    if(n%2==0)
      printf("prime");
      else
        printf("not prime");
}
int main()
{
    int a,b;
    scanf("%d",&a);
    b=check(a);
    return 0;
}



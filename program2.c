#include<stdio.h>
int addition(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int subtract(int a,int b)
{
    int c;
    c=a-b;
    return c;
}

int mul(int a,int b)
{
    int c;
    c=a*b;
    return c;
}

float div(int a,int b)
{
    float c;
    c=(float)a/b;
    return c;
}

int main()
{
    int x,y;
    float z;
    printf("enter x and y");
    scanf("%d%d",&x,&y);
    z=addition(x,y);
    printf(" \naddition is =%.0f",z);

     z=subtract(x,y);
    printf(" \nsub is =%.0f",z);

     z=mul(x,y);
    printf(" \nmul is =%.0f",z);

     z=div(x,y);
    printf(" \ndiv is =%f",z);

    return 0;
}


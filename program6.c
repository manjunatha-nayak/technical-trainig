#include<stdio.h>
struct student
{
    int p,b,c;
    float f;
    char s[100];
}
a;
int main()
{


    scanf("%s",&a.s);
    scanf("%d%d%d",&a.p,&a.b,&a.c);
   a.f=(a.p+a.b+a.c);
    printf("name of student is %s",a.s);
    printf("marks in 3 subject are %d%d%d",a.p,a.b,a.c);
    printf("average mark is %f",a.f);
    return 0;
}

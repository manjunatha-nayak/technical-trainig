#include<stdio.h>
struct employe
{
    int i;
    float m,e;
    char s[100],d[100];
}
a;
int main()
{


    scanf("%s",&a.s);
    scanf("%s",&a.d);

    scanf("%f%",&a.i);
    scanf("%f",&a.m);
    printf("name of employe is %s",a.s);
      printf("id of employe is %s",a.e);

    printf("id of the employee %d",a.i);
    printf("experience  %f",a.e);
   printf("salary of the employee %f",a.m);
    return 0;
}

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int consonet(int *m,int l)
{

    int i,j,count=0;
    for(i=0;i<l;i++)
    {
        if(isalpha(m[i]))
            if(!(m[i]=='a'|| m[i]=='e'||  m[i]=='i'||  m[i]=='o'||  m[i]=='u'))
            count++;
    }
    return count;
}

int main(){

char s[100];
int n,len;
scanf("%[^\n]s",s);
len=strlen(s);
n=consonet(s,len);
printf("%d",n);

return 0;
}

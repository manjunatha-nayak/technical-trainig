#include <iostream>

using namespace std;

char* spl(char *x, int n)
{
    int i,j,q;
    char *q=malloc(p,n*sizeof(char));
    for(i=0;p[i]!='\0';i++)
    {
        for(j=0;p[j]!='\0';j++)
        {
            if (isalnum(p[i]) || p[i] == ' ')
        {
            q[j]=p[i];

        }
    }
}
q=(char*)realloc(q,n*sizeof(char);
}
return q*;


int main()
{
    int i,n=0;
    char p = (char)malloc(1000 * sizeof(char));
    cin>>p
    for(i=0;p[i]!='\0';i++)
    {

        n++;
    }
    p=(char*)realloc(p,n*sizeof(char));
    char *q=spl(p,n);
    cout<<q;


    return 0;
}

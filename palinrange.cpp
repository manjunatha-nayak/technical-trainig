#include <iostream>

using namespace std;


void pal(int n)
{
    int digit,sum;
    int x=n;
    while(n>0)
    {

        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    if(x==sum)
        cout<<"pal";
    else
        cout<<"not pal";
}


int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    pal(n);
    return 0;
}

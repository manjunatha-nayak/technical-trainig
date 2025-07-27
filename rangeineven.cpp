#include <iostream>

using namespace std;

void rang(int s,int e)
{

    while(s<=e)
    {
        if(s%2==0)
            cout<<s<<endl;
        s++;
    }
}



int main()
{
    int s,e;
    cout<<"enter the value of s and e:"<<endl;
    cin>>s>>e;
    rang(s,e);
    return 0;
}

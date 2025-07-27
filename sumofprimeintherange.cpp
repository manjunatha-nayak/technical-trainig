
#include <iostream>
#include<math.h>

using namespace std;
void sumofprime(int s,int e)
{
    int i,j,flag;
    for(i=s;i<=e;i++)
    {
        flag=0;
        for(j=2;j<sqrt(i);j++)
        {
            if(i%j==0)
                flag=1;
        }
        if(flag=0)
              cout<<i<<endl;
    }

}


int main()
{
    int s,e;
    cout<<"enter the starting and ending numbers:"<<endl;
    cin>>s>>e;
 sumofprime(s,e);

    return 0;
}

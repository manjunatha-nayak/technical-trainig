#include <iostream>
#include<math.h>
using namespace std;
int primenum(int s,int e)
{
    int i,j,sum=0;
    for(i=s;i<=e;i++)
    {
       int flag=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                flag=1;
        }
        if(flag==0)
          {
              cout<<i<<endl;
            sum=sum+i;
          }
    }
    return sum;
}
int main()
{
    int s,e,sum;
    cout<<"enter the strating and ending values:"<<endl;
    cin>>s>>e;
   sum=primenum(s,e);
   cout<<sum;
    return 0;
}

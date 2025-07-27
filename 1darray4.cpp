#include <iostream>
#include<math.h>
using namespace std;

int main()
{   int n,i,j,sum=0;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }

    for(i=0;i<n;i++)
   {
       int flag=0;

       for(j=2;j<=sqrt(a[i]);j++)
       {
           if(a[i]%j==0)
           {
               flag=1;
           }
           if(flag==0)
           {
               cout<<a[i];
           }
       }
   }
    return 0;
}

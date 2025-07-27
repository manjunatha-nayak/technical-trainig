#include <iostream>

using namespace std;

int main()
{   int n,i;
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
        if(a[i]%2!=0)

        {
            cout<<a[i]<<endl;
        }
    }

    return 0;
}

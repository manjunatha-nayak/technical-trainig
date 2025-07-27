#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
   if ((n & (n - 1)) == 0)


       cout<<"power of two"<<endl;
       else
            cout<<"not a power of two";

    return 0;
}

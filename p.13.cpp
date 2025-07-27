#include <iostream>

using namespace std;
 int rectangle(int a,int b)
 {
     return a*b;

 }




int main()
{
    int m,n,s;
    cin>>m>>n;
    s=rectangle(m,n);
    cout<<s;
    return 0;
}

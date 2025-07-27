#include <iostream>

using namespace std;


void odd(int n)
{

    if(n%2==0)
        cout<<"even";
    else
        cout<<"odd";

}





int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
   odd(n);
    return 0;
}

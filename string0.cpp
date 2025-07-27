#include <iostream>
#include<ctype.h>
using namespace std;

int main()
{
    char s[100];
    int i;
    cout << "enter the string:" << endl;
    gets(s);
    s[0] = toupper(s[0]);
    for(i=0;s[i]!='\0';i++){
       if(isspace(s[i])){
           s[i+1]=toupper(s[i+1]);
       }
    }
    cout<<s;
    return 0;
}










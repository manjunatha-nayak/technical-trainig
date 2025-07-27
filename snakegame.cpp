#include<iostream>
using namespace std;

int p1=0,p2=0,p,r;
int main()
{

    while(1)
    {
        cout<<"enter the player number:";
        cin>>p;
        r=(rand()%10)+1;
        if(r>6)
        {
            r=r-3;
        }
         cout<<"your number is :"<<r<<endl;
        if(p==1)
        {
            p1=p1+r;
            if(p1==8)
            p1=p1+14;
            else if(p1==27)
            p1=p1+26;
            else if(p1==42)
            p1=p1+26;
            else if (p1==61)
            p1=p1+30;
            else if(p1==75)
            p1=p1+20;
            else if(p1==97)
            p1=p1-80;
            else if(p1==93)
            p1=p1-60;
            else if(p1==74)
            p1=p1-34;
            else if(p1==56)
            p1=p1-30;
            else if(p1==23)
            p1=p1-16;
            else if(p1==100){
            cout<<"you are winner"<<endl;
            break;
            }else if(p1>100)
           {
               p1=p1-r;
           }




        }
        else if(p==2)
        {
             p2=p2+r;
            if(p1==8)
            p2=p2+14;
            else if(p2==27)
            p2=p2+26;
            else if(p2==42)
            p2=p2+26;
            else if (p2==61)
            p2=p2+30;
            else if(p2==75)
            p2=p2+20;
            else if(p2==97)
            p2=p2-80;
            else if(p2==93)
            p2=p1-60;
            else if(p2==74)
            p2=p2-34;
            else if(p2==56)
            p2=p2-30;
            else if(p2==23)
            p2=p2-16;
            else if(p2==100){
            cout<<"you are winner"<<endl;
            break;
            }
            else if(p2>100)
            p2=p2-r;

        }else{
        cout<<"enter a valid player number";
        }
        cout<<p1<<" "<<p2<<endl;
        }
        return 0;
    }













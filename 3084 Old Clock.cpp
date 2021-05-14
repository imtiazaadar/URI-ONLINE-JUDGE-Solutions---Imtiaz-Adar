/*
    Imtiaz Adar
    URI - 3084
*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        int c=0,d=0;
        if(x==0 and y==0)
        {
            cout<<"00:00"<<endl;
        }
        else{
            c=(x*12)/360;
            d=(y*60)/360;
            if(c>9 and d>9)
            {
                cout<<c<< ":"<<d<<endl;
            }
            else if(c>9 and d<=9)
            {
                cout<<c<< ":"<<"0"<<d<<endl;
            }
            else if(c<=9 and d>9)
            {
                cout<<"0"<<c<< ":"<<d<<endl;
            }
            else{
                cout<<"0"<<c<< ":"<<"0"<<d<<endl;
            }

        }
    }
    return 0;
}

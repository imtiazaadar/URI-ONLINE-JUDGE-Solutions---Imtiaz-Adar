#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    while(cin>>year)
    {
        if(((year%4==0) and (year%100!=0)) or (year%400==0)){
            cout<<"This is leap year."<<endl;
        }
        if((year%55==0)){
            cout<<"This is bulukulu festival year."<<endl;
        }
        if(year%15==0)
        {
            cout<<"This is huluculu festival year."<<endl;
        }
        else if((((year%4!=0) and (year%100==0)) or (year%400!=0))){
            cout<<"This is an ordinary year."<<endl;
        }
    }
    return 0;
}
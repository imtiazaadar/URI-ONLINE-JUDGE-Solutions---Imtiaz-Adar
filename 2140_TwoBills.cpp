/**
 * @file 2140_TwoBills.cpp
 * @author Imtiaz Adar
 */
#include<bits/stdc++.h>
using namespace std;
#define ar arr
#define p "possible"
#define ip "impossible"
int main()
{
    int ar[]={2,5,10,20,50,100};
    int m,n,diff=0,val=0;
    bool stat=false;
    while(cin>>m>>n)
    {
        if(m==0 and n==0)
        {
            break;
        }
        else{
            diff=n-m;
            if(diff>100)
            {
                diff-=100;
            }
            else if(diff>50)
            {
                diff-=50;
            }
            else if(diff>20)
            {
                diff-=20;
            }
            else if(diff>10){
                diff-=10;
            }
            else if(diff>5)
            {
                diff-=5;
            }
            else if(diff>=2)
            {
                diff-=2;
            }
            for(int i=5; i>=0; i--){
                if(diff-arr[i]==0)
                {
                    stat=true;
                }
            }
            if(stat)
            {
                cout<<p<<endl;
            }
            else{
                cout<<ip<<endl;
            }  
        }
        diff=0;
        stat=false;
    }
    return 0;
}
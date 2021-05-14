/*
    Imtiaz Adar
    URI - 2143
*/
#include<bits/stdc++.h>
using namespace std;
#define in int
int main()
{
    in x,y,val;
    while(cin>>x)
    {
        if(x==0)
            break;
        else{
            while(x--)
            {
                cin>>val;
                if(val%2!=0){
                    cout<<val+(val-1)<<endl;
                }
                else{
                    cout<<val+(val-2)<<endl;
                }
            }
        }
    }
    return 0;
}
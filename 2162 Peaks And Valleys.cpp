/*
    Imtiaz Adar
    URI - 2162
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,val=0;
    cin>>x;
    int c[x];
    for(int i=0; i<x; ++i)
    {
        for(int i=0; i<x; ++i)
        {
            cin>>c[i];
        }
        for(int i=0; i<x-1; ++i)
        {
            if(!((c[i] > c[i-1] && c[i] > c[i+1]) || (c[i] < c[i-1] && c[i] < c[i+1])))
            {
                   val=1;
            }
            else{
                val=0;
            }
        }
    }
    cout<<val<<endl;
    return 0;
}

/*
    Imtiaz Adar
    URI - 2867
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,x,y,digit=0; int val=0;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>x>>y;
        double lg=log10(x);
        val=(lg*y)+1;
        cout<<val<<endl;
    }
    return 0;
}

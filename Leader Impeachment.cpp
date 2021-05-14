/*
    Imtiaz Adar
    URI - Leader Impreachment
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int v;
    while(cin>>x)
    {
        int imp=0;
        for(int i=0; i<x; ++i)
        {
            cin>>v;
            if(v)
            {
                imp+=1;
            }
        }
        int val=ceil(x*0.666);
        if(imp>=val)
        {
            cout<<"impeachment\n";
        }
        else{
            cout<<"acusacao arquivada\n";
        }
    }
    return 0;
}

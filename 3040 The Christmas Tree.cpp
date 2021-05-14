/*
    Imtiaz Adar
    URI - 3040
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c;
    cin>>x;
    for(int i=0; i<x; ++i)
    {
        cin>>a>>b>>c;
        if((a>=200 and a<=300) and (b>=50) and (c>=150))
        {
            cout<< "Sim\n";
        }
        else{
            cout<< "Nao\n";
        }
    }
    return 0;
}

/*
    Imtiaz Adar
    URI - 2702
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,meal=0;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    if(d>a)
    {
        meal+=d-a;
    }
    if(e>b)
    {
        meal+=e-b;
    }
    if(f>c)
    {
        meal+=f-c;
    }
    cout<<meal<<endl;
    return 0;
}
/*
    Imtiaz Adar
    URI - 2670
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v(3);
    v[0]=(b*2)+(c*4);
    v[1]=(a*2)+(c*2);
    v[2]=(b*2)+(a*4);
    int mini=v[0];
    for(int i=0; i<v.size(); ++i)
    {
        mini=min(mini,v[i]);
    }
    cout<<mini<<endl;
    return 0;
}
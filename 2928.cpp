/*
    Imtiaz Adar
    URI - 2928
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;
    int c1=0, c2=0;
    for(int i=0; i<x; ++i)
    {
        cin>>s;
        for(int j=0; j<s.length(); ++j){
            if(s[i]=='-')
            {
                c1++;
            }
            else if(s[i]=='.')
            {
                c2++;
            }
        }
    }
    if(c1<c2)
    {
        cout<< "N\n";
    }
    else if(c1>=c2){
        cout<<c1/c2<<endl;
    }
    else 
    {
        cout<<c1<<endl;
    }
    return 0;
}
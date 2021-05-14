/*
    Imtiaz Adar
    URI - 2826
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.compare(s2)==0)
    {
        cout<<s1<<endl;
        cout<<s2<<endl;
    }
    else if(s1.compare(s2)<0)
    {
        cout<<s1<<endl;
        cout<<s2<<endl;
    }
    else if(s1.compare(s2)>0)
    {
        cout<<s2<<endl;
        cout<<s1<<endl;
    }
    return 0;
}
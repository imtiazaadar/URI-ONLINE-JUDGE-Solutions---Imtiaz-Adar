/*
    Imtiaz Adar
    URI - 2764
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s[3]<<s[4]<<s[2]<<s[0]<<s[1]<<s[5]<<s[6]<<s[7]<<endl;
    cout<<s[6]<<s[7]<<s[5]<<s[3]<<s[4]<<s[2]<<s[0]<<s[1]<<endl;
    for(int i=0; i<s.length(); ++i)
    {
        if(s[i]=='/')
        {
            s[i]='-';
        }
    }
    cout<<s<<endl;
    return 0;
}
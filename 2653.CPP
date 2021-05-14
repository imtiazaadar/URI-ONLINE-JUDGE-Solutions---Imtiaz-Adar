/*
    Imtiaz Adar
    URI - 2653
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    set<string> se;
    while(cin>>s)
    {
        se.insert(s);  
    }
    cout<<se.size();
    return 0;
}
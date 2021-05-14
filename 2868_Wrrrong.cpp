/*
    Imtiaz Adar
    URI - 2868
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=0; i<x; ++i)
    {
        int val1,val2,eq,res=0,ans=0;
        char ch,ch1;
        cin>>val1;
        cin.ignore();
        cin>>ch;
        cin>>val2;
        cin.ignore();
        cin>>ch1;
        cin>>eq;
        if(ch=='+')
        {
            res=val1+val2;
        }
        if(ch=='-')
        {
            res=val1-val2;
        }
        if(ch=='*')
        {
            res=val1*val2;
        }
        ans=abs(eq-res);
        string s="E";
        for(int i=0; i<ans; i++)
        {
            s.append("r");
        }
        string k=s+"ou!";
        cout<<k<<endl;
    }
    return 0;
}
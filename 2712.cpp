/*
    Imtiaz Adar
    URI - 2712
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;
    for(int i=0; i<x; i++)
    {
        cin>>s;
        if(s.length()==8 and (isupper(s[0]) and isupper(s[1]) and isupper(s[2])))
        {
            int len=s.length()-1;
            if(s[3]=='-' and (s[len]=='1' or s[len]=='2'))
            {
                cout<<"MONDAY\n";
            }
            else if(s[3]=='-' and (s[len]=='3' or s[len]=='4'))
            {
                cout<<"TUESDAY\n";
            }
            else if(s[3]=='-' and (s[len]=='5' or s[len]=='6'))
            {
                cout<<"WEDNESDAY\n";
            }
            else if(s[3]=='-' and (s[len]=='7' or s[len]=='8'))
            {
                cout<<"THURSDAY\n";
            }
            else if(s[3]=='-' and (s[len]=='0' or s[len]=='9'))
            {
                cout<<"FRIDAY\n";
            }
        }
        else{
            cout<<"FAILURE\n";
        }
    }
    return 0;
}
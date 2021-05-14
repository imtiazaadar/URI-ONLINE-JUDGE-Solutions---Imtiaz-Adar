/*
    Imtiaz Adar
    URI - Avoiding Rain
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a=0,b=0,c=0,d=0;
    cin>>x;
    while(x--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1=="chuva" and b==0)
        {
            a++;
            d++;
        }
        else if(s1=="chuva" and b>0)
        {
            b--;
            d++;
        }
        if(s2=="chuva" and d==0)
        {
            c++;
            b++;
        }
        else if(s2=="chuva" and d>0)
        {
            b++;
            d--;
        }
    }
    cout<<a<< " "<<c<<endl;
    return 0;
}
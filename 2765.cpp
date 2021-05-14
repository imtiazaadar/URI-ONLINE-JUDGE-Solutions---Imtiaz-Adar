/*
    Imtiaz Adar
    URI - 2765
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string x;
    getline(cin,x);
    for(int i=0; i<x.length(); ++i)
    {
        if(x[i]==',')
        {
            x[i]='\n';
        }
    }
    cout<<x<<endl;
    return 0;
}
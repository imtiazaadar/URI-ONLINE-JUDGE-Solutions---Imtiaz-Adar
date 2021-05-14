/*
    Imtiaz Adar
    URI - CPF INPUT AND OUTPUT
*/
#include<iostream>
using namespace std;
int main()
{
    string x;
    cin>>x;
    for(int i=0; i<x.length(); ++i)
    {
        if(x[i]=='.' or x[i]=='-')
        {
            x[i]='\n';
        }
    }
    cout<<x<<endl;
    return 0;
}
/*
    Imtiaz Adar
    URI - 3039
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,boy=0,girl=0;
    cin>>x;
    string name,gender;
    while(x--)
    {
        cin>>name>>gender;
        if(gender=="M")
        {
            boy++;
        }
        else if(gender=="F")
        {
            girl++;
        }
    }
    cout<<boy<< "carrinhos\n";
    cout<<girl<< "bonecas\n";
    return 0;
}

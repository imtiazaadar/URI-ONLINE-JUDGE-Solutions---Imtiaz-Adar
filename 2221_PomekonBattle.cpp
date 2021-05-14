/*
    Imtiaz Adar
    URI - 2221
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,d_attack,d_defence,d_level,g_attack,g_defence,g_level,dsum=0,gsum=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int bonus;
        cin>>bonus;
        cin>>d_attack>>d_defence>>d_level;
        dsum=(d_attack+d_defence)/2;
        if(d_level%2==0){
            dsum+=bonus;
        }
        cin>>g_attack>>g_defence>>g_level;
        gsum=(g_attack+g_defence)/2;
        if(g_level%2==0){
            gsum+=bonus;
        }
        if(dsum>gsum)
        {
            cout<<"Dabriel"<<endl;
        }
        else if(dsum<gsum)
        {
            cout<<"Guarte"<<endl;
        }
        else if(dsum==gsum)
        {
            cout<<"Empate"<<endl;
        }
    }
    return 0;
}
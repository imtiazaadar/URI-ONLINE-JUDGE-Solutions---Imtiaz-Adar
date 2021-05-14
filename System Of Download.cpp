/*
    Imtiaz Adar
    URI - System Of Download
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a,b,sum=0;
    for(int i=0; i<x; ++i)
    {
        cin>>a>>b;
        sum+=a+b;
        if(sum==0)
        {
            cout<< "PROXYCITY\n";
        }
        else if(sum==1)
        {
            cout<< "P.Y.N.G.\n";
        }
        else if(sum==2)
        {
            cout<< "DNSUEY!\n";
        }
        else if(sum==3)
        {
            cout<< "SERVERS\n";
        }
        else if(sum==4)
        {
            cout<< "HOST!\n";
        }
        else if(sum==5)
        {
            cout<< "CRIPTONIZE\n";
        }
        else if(sum==6)
        {
            cout<< "OFFLINE DAY\n";
        }
        else if(sum==7)
        {
            cout<< "SALT\n";
        }
        else if(sum==8)
        {
            cout<< "ANSWER!\n";
        }
        else if(sum==9)
        {
            cout<< "RAR?\n";
        }
        else if(sum==10)
        {
            cout<< "WIFI ANTENNAS\n";
        }
        sum=0;
    }
    return 0;
}

/*
    Imtiaz Adar
    URI - EVENT Time
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1=0,h1=0,m1=0,s1=0,d2=0,h2=0,m2=0,s2=0;
    string di1,di2,co1,co2,co4,co5;
    cin>>di1;
    cin>>d1;
    cin>>h1;
    cin.ignore();
    cin>>co1;
    cin>>m1;
    cin.ignore();
    cin>>co2;
    cin>>s1;
    cin.ignore();
    cin>>di2;
    cin>>d2;
    cin>>h2;
    cin.ignore();
    cin>>co4;
    cin>>m2;
    cin.ignore();
    cin>>co5;
    cin>>s2;
    int slot1=(d1*86400)+(h1*3600)+(m1*60)+s1;
    int slot2=(d2*86400)+(h2*3600)+(m2*60)+s2;
    int diff=slot2-slot1;
    int day=diff/86400;
    int hour=(diff%86400)/3600;
    int minute=((diff%86400)%3600)/60;
    int second=((diff%86400)%3600)%60;
    cout<<day<< " dia(s)\n";
    cout<<hour<< " hora(s)\n";
    cout<<minute<< " minuto(s)\n";
    cout<<second<< " segundo(s)\n";
    return 0;
}

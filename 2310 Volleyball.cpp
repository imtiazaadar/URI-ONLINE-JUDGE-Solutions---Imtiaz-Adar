/*
    Imtiaz Adar
    Volleyball 2310
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,c,e,f,g;
    double diff=0,diff1=0,diff2=0, s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
    cin>>x;
    string s;
    for(int i=0; i<x; i++)
    {
        cin.ignore();
        cin>>s;
        cin>>a>>b>>c;
        s1+=a;
        s2+=b;
        s3+=c;
        cin>>e>>f>>g;
        s4+=e;
        s5+=f;
        s6+=g;
    }
    diff=(s4*100.00)/s1;
    diff1=(s5*100.00)/s2;
    diff2=(s6*100.00)/s3;
    cout<< "Pontos de Saque: "<<fixed<<setprecision(2)<<diff<< " %.\n";
    cout<< "Pontos de Bloqueio: "<<fixed<<setprecision(2)<<diff1<< " %.\n";
    cout<< "Pontos de Ataque: "<<fixed<<setprecision(2)<<diff2<< " %.\n";
    return 0;
}

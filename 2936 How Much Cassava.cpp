/*
    Imtiaz Adar
    URI - 2936
*/
#include<iostream>
#define f 300
#define s 1500
#define t 600
#define fo 1000
#define fi 150
#define dona 225
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int fir=a*f;
    int sec=b*s;
    int thi=c*t;
    int fou=d*fo;
    int fiv=e*fi;
    int res=fir+sec+thi+fou+fiv+dona;
    cout<<res<<endl;
    return 0;
}

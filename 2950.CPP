/*
    Imtiaz Adar
    URI - 2950
*/
#include<bits/stdc++.h>
#define sau saurons_diameter
#define sar sarumans_diameter
using namespace std;
int main()
{
    int dis,sau,sar;
    cin>>dis>>sau>>sar;
    double ICM=0.0;
    ICM=((float)dis/(sau+sar));
    cout<<fixed<<setprecision(2)<<ICM<<endl;
    return 0;
}
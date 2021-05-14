/*
    Imtiaz Adar
    URI - 2533
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int sub,n,c,n_into_c_sum=0,c_sum=0;
    double api=0;
    while(cin>>sub){
        while(sub--){
        cin>>n>>c;
        n_into_c_sum+=(n*c);
        c_sum+=c;
        }
        api=(double)(n_into_c_sum/(c_sum*100.0));
        cout<<fixed<<setprecision(4)<<api<<endl;
        n_into_c_sum=0,c_sum=0;
    }
    return 0;
}
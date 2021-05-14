/**
 * @file 1214_Above_Average.cpp
 * @author Imtiaz Adar
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c,above=0,sum=0;
    double avg=0;
    cin>>x;
    while(x--)
    {
        cin>>c;
        int val[c];
        for(int i=0;i<c;i++){
            cin>>val[i];
        }
        for(int i=0;i<c;i++){
            sum+=val[i];
        }
        avg=(sum/c);
        for(int i=0;i<c;i++){
            if(val[i]>avg){
                above+=1;
            }
        }
        double percentage=(((above*100)/(double)c));
        cout<<fixed<<setprecision(3)<<percentage<<"%"<<endl;
        above=0,sum=0;
    }
    return 0;
}
/*
Imtiaz Adar
Fast Prime Number - URI
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,count=0; long val;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>val;
        if(val<2){
            cout<<"Not Prime\n";
        }
        else if(val==2){
            cout<<"Prime\n";
        }
        else{
            for(int i=2;i<sqrt(val)+1;i++){
                if(val%i==0){
                    count++;
                    break;
                }
            }
            if(count!=0){
                cout<<"Not Prime\n";
            }
            else{
                cout<<"Prime\n";
            }
            count=0;
        }
    }
    return 0;
}
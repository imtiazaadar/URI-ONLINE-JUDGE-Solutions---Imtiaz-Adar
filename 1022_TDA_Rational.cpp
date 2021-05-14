/*
    Imtiaz Adar
    URI - 1022
*/
#include<bits/stdc++.h>
using namespace std;
int mdc(int a, int b){
    if(a<0){
        a=-a;
    }
    if(b<0){
        b=-b;
    }
    else if(a%b==0){
        return b;
    }
    else{
        mdc(b,a%b);
    }
}
int main()
{
    int x;
    cin>>x;
    int n1,n2,d1,d2,res=0,res1=0;
    char ch1,ch2,ch3;
    for(int i=0;i<x;i++){
        cin>>n1;
        cin>>ch1;
        cin>>d1;
        cin>>ch2;
        cin>>n2;
        cin>>ch3;
        cin>>d2;
        if(ch2=='+')
        {
            res=((n1*d2)+(n2*d1));
            res1=d1*d2;
        }
        else if(ch2=='-'){
            res=((n1*d2)-(n2*d1));
            res1=d1*d2;
        }
        else if(ch2=='*'){
            res=n1*n2;
            res1=d1*d2;
        }
        else if(ch2=='/'){
            res=n1*d2;
            res1=n2*d1;
        }
        int val=mdc(res,res1);
        cout<<res<<"/"<<res1<<" = "<<res/val<<"/"<<res1/val<<endl;
    }
    return 0;
}
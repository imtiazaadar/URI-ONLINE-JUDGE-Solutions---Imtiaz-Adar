/*
    Imtiaz Adar
    URI - 3065
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool stat=false;
    int n,sum=0,val=0;
    string s;
    int i=0;
    while(!stat)
    {
        i++;
        cin>>n;
        if(n==0)
        {
            stat=true;
        }
        else{
            cin.ignore();
            cin>>s;
            stringstream ss(s);
            ss>>val;
            stringstream sss(s);
            int k=0;
            sss>>k;
            cout<<val;
            cout<<endl<<k<<endl;
            cout<< "Teste "<<i<<endl;
            cout<<sum<<endl;
        }
    }
    return 0;
}

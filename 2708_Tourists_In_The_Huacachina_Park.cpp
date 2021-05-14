/*
    Imtiaz Adar
    URI - 2708
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int jeeps,going=0,leaving=0,gc=0,lc=0;
    while(cin>>s)
    {
        if(s=="ABEND")
        {
            break;
        }
        else{
            cin>>jeeps;
            if(s=="SALIDA")
            {
                going+=jeeps;
                gc++;
            }
            else if(s=="VUELTA")
            {
                leaving+=jeeps;
                lc++;
            }
        }
    }
    cout<<going-leaving<<endl;
    cout<<gc-lc<<endl;
    return 0;
}
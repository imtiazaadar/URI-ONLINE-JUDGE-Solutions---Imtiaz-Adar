/*
    Imtiaz Adar
    URI - 2543
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,c,d,videos=0;
    while(cin>>x>>y){
        while(x--)
        {
            cin>>c>>d;
            if(d==0 and c==y)
            {
                videos++;
            }
        }
        cout<<videos<<endl;
        videos=0;
    }
    return 0;
}

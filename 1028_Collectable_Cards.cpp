#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,val,val1,res;
    cin>>x;
    while(x--)
    {
        cin>>val>>val1;
        if(val<val1)
        {
            swap(val,val1);
            if(val%val1==0)
            {
                res=val1;
            }
            else{
                res=val%val1;
            }
        }
        else{
            if(val%val1==0)
            {
                res=val1;
            }
            else{
                res=val%val1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
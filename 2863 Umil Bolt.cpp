/*
    Imtiaz Adar
    URI - 2863
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double val;
    while(cin>>x)
    {
        double arr[x];
        for(int i=0; i<x; i++)
        {
            cin>>arr[i];
        }
        double min=arr[0];
        for(int i=0; i<x; i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}

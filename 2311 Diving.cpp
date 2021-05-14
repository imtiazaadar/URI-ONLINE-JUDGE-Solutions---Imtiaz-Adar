/*
    Imtiaz Adar
    URI - 2311
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;
    double val,sum=0,answer=0;
    double arr[7];
    while(x--)
    {
        cin.ignore();
        cin>>s;
        cin>>val;
        for(int i=0; i<7; i++)
        {
            cin>>arr[i];
        }
        double max=arr[0];
        for(int i=0; i<7; i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        double min=arr[0];
        for(int i=0; i<7; i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        double pr=max+min;
        for(int i=0; i<7; i++)
        {
            sum+=arr[i];
        }
        answer=(sum-pr)*val;
        cout<<s<<fixed<<setprecision(2)<< " "<<answer<<endl;
        sum=0;
    }
    return 0;
}

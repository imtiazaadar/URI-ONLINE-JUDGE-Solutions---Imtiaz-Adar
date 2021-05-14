/*
    Imtiaz Adar
    URI - 2807
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fir=0,sec=1,fibo=0;
    int arr[n];
    arr[0]=1;
    arr[1]=1;
    for(int i=2; i<n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    int i=0;
    for(i=n-1; i>=1; i--)
    {
        cout<<arr[i]<< " ";
    }
    cout<<arr[i];
    cout<<endl;
    return 0;
}
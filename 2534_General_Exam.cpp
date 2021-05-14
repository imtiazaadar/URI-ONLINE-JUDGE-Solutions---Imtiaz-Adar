/*
    Imtiaz Adar
    URI - 2534
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,ele;
    while(cin>>x>>y){
        int arr[x];
        for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
            cin>>arr[i];
        }
        sort(arr,arr+x,greater<int>());
        for(int i=0;i<y;i++){
            cin>>ele;
            cout<<arr[ele-1]<<endl;
        }
    }
    return 0;
}
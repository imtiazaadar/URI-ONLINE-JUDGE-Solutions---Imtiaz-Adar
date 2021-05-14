/*
    Imtiaz Adar
    URI - 2896
*/
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int buy,empty;
        cin>>buy>>empty;
        cout<<((buy%empty)+(buy/empty))<<endl;
    }
    return 0;
}

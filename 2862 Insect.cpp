/*
    Imtiaz Adar
    URI - 2862
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        if(val<=8000)
        {
            cout<< "Inseto!"<<endl;
        }
        else{
            cout<< "Mais de 8000!"<<endl;
        }
    }
    return 0;
}

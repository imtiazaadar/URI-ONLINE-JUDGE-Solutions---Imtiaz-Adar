/*
    Imtiaz Adar
    URI - 2685
*/
#include<iostream>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        if((x>=0 and x<90) or x==360)
        {
            cout<< "Bom Dia!!\n";
        }
        else if(x>=90 and x<180)
        {
            cout<< "Boa Tarde!!\n";
        }
        else if(x>=180 and x<270)
        {
            cout<< "Boa Noite!!\n";
        }
        else if(x>=270 and x<360)
        {
            cout<< "De Madrugada!!\n";
        }
    }
    return 0;
}
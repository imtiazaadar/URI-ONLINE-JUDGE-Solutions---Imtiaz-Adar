/*
    Imtiaz Adar
    URI - 2949
*/
#include<bits/stdc++.h>
#define ar array
using namespace std;
int main()
{
    int x,hobbits=0,elves=0,humans=0,dwarves=0,magicians=0;
    //Hobbits X,Elves E, Humans H. Dwarves A, Magicians M
    cin>>x;
    string a,b;
    for(int i=0; i<x; ++i)
    {
        cin>>a>>b;
        if(b=="X")
        {
            hobbits++;
        }
        else if(b=="E")
        {
            elves++;
        }
        else if(b=="H")
        {
            humans++;
        }
        else if(b=="A")
        {
            dwarves++;
        }
        else if(b=="M")
        {
            magicians++;
        }
    }
    cout<<hobbits<< " Hobbit(s)\n";
    cout<<humans<< " Humano(s)\n";
    cout<<elves<< " Elfo(s)\n";
    cout<<dwarves<< " Anao(s)\n";
    cout<<magicians<< " Mago(s)\n";
    return 0;
}
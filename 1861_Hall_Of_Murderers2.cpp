/*
    Imtiaz Adar
    1861 Hall Of Murderers 2 - URI
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> murdurer;
    map<string,int> dead;
    string s1,s2;
    while(cin>>s1>>s2)
    {
        murdurer[s1]++; 
        dead[s2]++;  
    }
    for(map<string,int>::iterator it=murdurer.begin(); it!=murdurer.end(); it++)
    {
        int x=dead[it->first]; //put murdurers key into dead map
        if(!x) //if not found, then printing unique keys with their values
        {
            cout<<it->first<< " "<<it->second<<endl; 
        }
        //Both are same
        /* 
        string str=it->first;  //here murdurers key stored into str
        if(dead.count(str)==0) //checking if dead's key not matches with murdurer's key
        {
            cout<<it->first<< " "<<it->second<<endl;
        }
        */
       
 
    }
    murdurer.clear();
    dead.clear();
    return 0;
}

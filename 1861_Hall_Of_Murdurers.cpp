/*
    Imtiaz Adar
    1861 Hall Of Murderers - URI
*/
//It's a really really great problem where I used map & multimap
#include<bits/stdc++.h>
using namespace std;
#define mulmap multimap
#define m map
#define com common
int main()
{
    string s1,s2;
    mulmap<string,int> murdurer; 
    mulmap<string,int> dead;
    m<string,int> result;
    while(cin>>s1>>s2)
    {
        murdurer.insert(pair<string,int>(s1,0));    //first string pushed into murdurer multimap with a value 0
        dead.insert(pair<string,int>(s2,0));        //second string pushed into dead multimap with a value 0
    }
    mulmap<string,int>::iterator it;
    for(it=murdurer.begin(); it!=murdurer.end(); it++)
    {
        string com=it->first;    //put the key into com string
        if(dead.count(com)==0)   //checking if dead multimap has a common key of com string
        {                        //result map initialized value 0.
            result[com]++;       //value increaments by 1 everytime after inserting keys to result map
        }                       //Map takes unique keys. But if it finds duplicate values while taking input,
    }                          //It increaments the value of that particular key by 1  
    cout<< "HALL OF MURDERERS"<<endl;                         
    for(m<string,int>::iterator it=result.begin(); it!=result.end(); it++)
    {
        cout<<it->first<< " "<<it->second<<endl;
    }
    murdurer.clear();
    dead.clear();
    result.clear();
    return 0;
}
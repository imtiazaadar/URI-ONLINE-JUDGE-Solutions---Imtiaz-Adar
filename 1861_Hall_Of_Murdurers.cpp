/*
    Imtiaz Adar
    1861 Hall Of Murderers - URI
*/
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
        murdurer.insert(pair<string,int>(s1,0));   
        dead.insert(pair<string,int>(s2,0));        
    }
    mulmap<string,int>::iterator it;
    for(it=murdurer.begin(); it!=murdurer.end(); it++)
    {
        string com=it->first;    
        if(dead.count(com)==0)   
        {                        
            result[com]++;       
        }                       
    }                          
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

#include<iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    vector<char> count(26,0);
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        count[tolower(s[i])-'a']++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(count[tolower(s[i])-'a']==1)
        {
            cout<<i<<endl; 
            return 0;
        }
    }     
    cout<<-1;
    return 0;

}

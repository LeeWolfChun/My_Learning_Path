#include <iostream>
#include <vector>
#include <string>

using namespace std;
string processTypedString(string s)
{
    vector<char> temp;
    for(auto c:s)
    {
        if(c!='#')
        {
            temp.push_back(c);
        }
        else
        {
            if(!temp.empty())
                temp.pop_back();
        }
    }
    return string(temp.begin(),temp.end());
}
int main()
{
    string s,t;
    
    getline(cin,s);
    getline(cin,t);
    if(processTypedString(s)==processTypedString(t))
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;



    return 0;

}
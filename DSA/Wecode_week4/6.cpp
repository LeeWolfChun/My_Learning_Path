#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string result;
    int sum=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='(')
    {
        
        if(sum>0)
            result.push_back(s[i]);
        sum++;
    }
    else
    {
        sum--;
        if(sum>0)
            result.push_back(s[i]);
    }
}

cout<<result;

}
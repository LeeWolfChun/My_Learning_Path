#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string s;
    string result;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((tolower(s[i])==tolower(result.back())))
        {
            result.pop_back();
        }
        else 
        {
            result.push_back(s[i]);
        }

    }
    cout<<result;
}
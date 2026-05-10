#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    stack <int> stmin;
    stack <int> val;
    for( int i=0; i<n; i++)
    {

        string token;
        getline(cin,token);
        stringstream ss(token);
        string cmd;
        ss>>cmd;
        if(cmd=="push")
        {
            int x;
            ss>>x;
            val.push(x);
            if(stmin.empty()||stmin.top()>=x)
                stmin.push(x);
        }   
        else if(cmd=="pop")
        {
            int p=val.top();
            val.pop();
            if(p==stmin.top())
                stmin.pop();
        }
        else if(cmd=="getmin")
        {
            cout<<stmin.top()<<endl;
        }
        else if(cmd=="top")
        {
            cout<<val.top()<<endl;
        }
    }
    return 0;
}


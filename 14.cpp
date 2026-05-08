#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    stack<int> minst;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string line;
        getline(cin,line);
        stringstream ss(line);
        string cmd;
        ss>> cmd;
        if(cmd=="push")
        {
            int x;
            ss>>x;
            v.push_back(x);
            if(minst.empty()||minst.top() >= x)
            {
                minst.push(x);
            }
        }
        else if(cmd=="pop")
        {
            if(!minst.empty())
            {
                minst.pop();
            }
            v.pop_back();
        }
        else if(cmd=="top")
        {
            if(!v.empty())
                cout<<v.back()<<endl;
        }
        else if (cmd == "getMin") {
            if (!minst.empty()) cout << minst.top() << "\n";
        }
    }
}
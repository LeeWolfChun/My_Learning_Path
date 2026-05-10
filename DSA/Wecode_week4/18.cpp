#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;
int main()
{   
    
    queue<double>val;
    int n; cin>>n;
    vector<string> sline(n);
    cin.ignore();
    for(auto&x:sline)
    {   
        getline(cin,x);
    }
    for(int i=0; i<n; i++)
    {
        stringstream ss(sline[i]);
        string voca;
        ss>>voca;
        if(voca=="push")
        {
            int x;
            ss>>x;
            val.push(x);
        }   
        else if(voca=="pop")
        {
            if(!val.empty())
            {
                cout<<val.front()<<endl;
                val.pop();
            }
        }
        else if(voca=="peek")
        {
            cout<<val.front()<<endl;
        }
        else if(voca=="empty")
        {
            if(val.empty())
            {
                cout<<"true"<<endl;
            }
            else
            {
                cout<<"false"<<endl;
            }
        }
    }
}
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
    int n,k;
    cin>>n>>k;
    queue<int> val;
    vector<string> sline(k);
    cin.ignore();
    for(auto&x:sline)
        getline(cin,x);
    for(int i=0; i<k; i++)
    {
        stringstream ss(sline[i]);
        string voca;
        ss>>voca;
        if(voca=="enqueue")
        {
            int x;
            ss>>x;
            if(val.size()<n)
            {
                val.push(x);
                cout<<"true"<<endl;
            }
            else 
            {
                cout<<"false"<<endl;
            }
        }   
        else if(voca=="dequeue")
        {
            if(!val.empty())
            {
                cout<<"true"<<endl;
                val.pop();
            }
            else
            {
                cout<<"false"<<endl;
            }
        }
        else if(voca=="front")
        {
            if(!val.empty())
            {
                cout<<val.front()<<endl;
            }
            else 
            {
                cout<<-1<<endl;
            }
            
        }
        else if(voca=="rear")
        {
            if(!val.empty())
            {
                cout<<val.back()<<endl;
            }
            else 
            {
                cout<<-1<<endl;
            }
        }
        else if(voca=="isFull")
        {
            if(val.size()==n)
            {
                cout<<"true"<<endl;
            }
            else 
            {
                cout<<"false"<<endl;
            }
        }
        else if(voca=="isEmpty")
        {
            if(val.empty())
            {
                cout<<"true"<<endl;
            }
            else 
            {
                cout<<"true"<<endl;
            }
        }
    }
}
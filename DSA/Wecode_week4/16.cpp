#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <iomanip>
#include <cmath>


using namespace std;

int main()
{
    int n;
    cin>>n;
    queue<int> sandwichs;
    vector <int> stu(n);
    vector<int> curr_stu(2,0);
    for(auto&x:stu)
    {
        cin>>x;
        if(x==0)
        {
            curr_stu[0]+=1;
        }
        else
        {
            curr_stu[1]+=1;
        }
    }

    for(int i=0; i<n; i++)
    {
        int s; cin>>s;
        sandwichs.push(s);
    }
    while(sandwichs.size()!=0&&(curr_stu[sandwichs.front()]!=0))
    {
        curr_stu[sandwichs.front()]--;
        sandwichs.pop();
    }
    if(sandwichs.empty())
    {
        cout<<0<<endl;
    }
    else
        cout<<sandwichs.size();
    return 0;
}
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
    int k,n;
    cin>>k>>n;
    vector<double> val(n);
    for(auto&x:val)
        cin>>x;
    if(k==1)
    {
        for(const auto &x:val)
        {
            cout<<fixed<<setprecision(5)<<x<<endl;
        }
        return 0;
    }
    queue<double> window;
    int S_window=0;
    for(int i=0; i<n;i++)
    {
        window.push(val[i]);
        S_window+=val[i];
        if(window.size()>k)
        {
            S_window-=window.front();
            window.pop();
            cout<<fixed<<setprecision(5)<<S_window/(double)k<<endl;;
        }
        else
        {
            cout<<fixed<<setprecision(5)<<S_window/(double)(window.size())<<endl;;
        }
    }
}
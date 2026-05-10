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
    vector<int> line_up(n);
    for(auto&x:line_up)
        cin>>x;
    int target_front=line_up[k];
    int target_rear=target_front-1;
    int sum=0;
    for(int i=0;i<k;i++)
    {
        int turn =min(line_up[i],target_front);
        sum+=turn;
    }
    for(int i=k+1;i<n;i++)
    {
        int turn =min(line_up[i],target_rear);
        sum+=turn;
    }
    sum+=line_up[k];
    cout<<sum<<endl;
    return 0;
}


#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<double>arr(n);
    vector<int> steak(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        int sum=1;
        for(int j=0;j<i;j++)
        {
            
            if(arr[j]<=arr[i])
            {
                sum++;
            }
            else sum=1;
        }
        steak[i]=sum;
    }
    for(auto x:steak)
        cout<<x<<" ";
}
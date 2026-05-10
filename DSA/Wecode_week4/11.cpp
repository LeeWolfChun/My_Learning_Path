#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int value;cin>>value;
        bool destroyed = false;
        while (!v.empty() && v.back() > 0 && value < 0) {
            if (v.back() < abs(value)) {
                v.pop_back(); 
                continue; 
            } else if (v.back() == abs(value)) {
                v.pop_back(); 
                destroyed = true;
                break;
            } else {
                destroyed = true;
                break;
            }
        }

        if (!destroyed) {
            v.push_back(value);
        }
    }

    
    for(auto x:v)
        cout<<x<<" ";
}

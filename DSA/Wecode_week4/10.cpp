
#include <iostream>
#include <deque>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

void findMinOfSlidingWindow(vector<int> a, int k) {

for(int i=0;i<a.size()-k+1;i++)
{
    int min=a[i];
    for(int j=i;j<i+k;j++)
    {
        if(a[j]<min)
            min=a[j];
    }
    cout<<min<<" ";
}

}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    findMinOfSlidingWindow(a, k);

    return 0;
}
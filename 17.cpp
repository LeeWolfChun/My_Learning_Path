#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> tickets(n);
    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }

    long long total_time = 0;
    long long target_tickets = tickets[k];

    for (int i = 0; i < n; i++) {
        if (i <= k) {
            
            total_time += min(tickets[i], target_tickets);
        } else {
            total_time += min(tickets[i], target_tickets - 1);
        }
    }

    cout << total_time << endl;

    return 0;
}
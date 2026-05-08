#include <iostream>
#include <stack>
#include <string>

using namespace std;

class MyQueue {
private:
    stack<int> s1; 
    stack<int> s2; 

    void shiftStacks() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

public:
    void push(int val) {
        s1.push(val);
    }

    int pop() {
        shiftStacks();
        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek() {
        shiftStacks();
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    if (!(cin >> q)) return 0;

    MyQueue mq;
    while (q--) {
        string op;
        cin >> op;
        if (op == "push") {
            int val; cin >> val;
            mq.push(val);
        } else if (op == "pop") {
            cout << mq.pop() << "\n";
        } else if (op == "peek") {
            cout << mq.peek() << "\n";
        } else if (op == "empty") {
            cout << (mq.empty() ? "true" : "false") << "\n";
        }
    }
    return 0;
}
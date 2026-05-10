#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> temp(n);
    for(int i=0;i<n;i++)
    {
        cin>>temp[i];
    }
    stack<int> st;
    vector<int> result(n,0);
    for(int i=0; i<n; i++)
    {
            while(!st.empty() && temp[st.top()]<temp[i])
            {
                //lấy giá trị trên stack ra
                int index_stack=st.top();
                st.pop();
                //cập nhật khi nào có ngày nóng hơn
                result[index_stack]=i-index_stack;
            }
        //lưu ngày mà chưa biết khi nào có ngày nóng hơn
        st.push(i);
    }
    for (int i = 0; i < n; i++) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

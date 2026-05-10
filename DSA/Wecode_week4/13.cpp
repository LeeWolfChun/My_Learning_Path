#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
int main()

{
    long long n;
    cin>>n;
    stack <long long> st;
    for(int i=0;i<n;i++)
    {
        string token;
        cin>>token;
        if(token=="+"||token=="-"||token=="*"||token=="/")
        {
            long long n2=st.top();st.pop();
            long long n1=st.top();st.pop();
            if(token=="+")st.push(n1+n2);
            else if(token=="-")st.push(n1-n2);
            else if(token=="*")st.push(n1*n2);
            else 
            {   
                if(n2!=0) st.push(n1/n2);
                else  st.push(0);
            }   
        }
        else 
            st.push(stod(token));
    }
    if(!st.empty())
        cout<<st.top();
    return 0;
}
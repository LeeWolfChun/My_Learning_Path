#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int sumtron=0, sumvuong=0, sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='[')
        {
            sumvuong++;
        }
        else if(s[i]==']')
        {
            if(sumvuong==0)
            {
            sum++;
            }
            else
                sumvuong--;
        }
        else if(s[i]=='(')
        {
            sumtron++;
        }
        else if(s[i]==')')
        {
            if(sumtron==0)
            {
            sum++;
            }
            else sumtron--;
        }

    }
    sum=sum+sumvuong+sumtron;
    cout<<sum;
}
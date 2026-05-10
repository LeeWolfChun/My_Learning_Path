#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    vector <string> token;
    string value="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            value.push_back(s[i]);
        }
        else 
        {
            if(value!="")
            {
                token.push_back(value);
            }
            value="";
        }
        
    }
    if (!value.empty()) {
        token.push_back(value);
}
    vector<double> result;
    for(int i=0;i<token.size();i++)
    {
        if(token[i]=="+")
        {
            double n2=result[result.size()-1];
            double n1=result[result.size()-2];
            result.pop_back();
            result.pop_back();
            result.push_back(n1+n2);
        }
        else if(token[i]=="-")
        {
            double n2=result[result.size()-1];
            double n1=result[result.size()-2];
            result.pop_back();
            result.pop_back();
            result.push_back(n1-n2);
        }
        else if(token[i]=="x")
        {
            double n2=result[result.size()-1];
            double n1=result[result.size()-2];
            result.pop_back();
            result.pop_back();
            result.push_back(n1*n2);
        }
        else if(token[i]==":")
        {
            double n2=result[result.size()-1];
            double n1=result[result.size()-2];
            result.pop_back();
            result.pop_back();
            result.push_back(n1/n2);
        }
        else
        {
            result.push_back(stod(token[i]));
        }
    }
    cout<<result[0];

}
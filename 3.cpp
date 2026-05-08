#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> score;
    for ( int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if (s=="D")
        {
            score.push_back(score.back()*2);
        }
        else if(s=="C")
        {
            if(!score.empty())
                score.pop_back();
        }
        else if(s=="+")
        {
            if(score.size()>=2)
            {
                int n1=score[score.size()-1];
                int n2=score[score.size()-2];
                score.push_back(n1+n2);
            }
        }
        else
            score.push_back(stoi(s));
    }
    long long sum=0;
    for(const auto &x:score)
        sum+=x;
    cout<<sum;
    
}
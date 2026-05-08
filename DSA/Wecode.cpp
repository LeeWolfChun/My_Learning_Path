
/*#include <iostream>
using namespace std;
int FirstSearch(int a[], int n, int x){
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)return i;
    }
    return -1;

}
int FinishSearch(int a[], int n, int x){
    int finish=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)finish=i;
    }
    if(finish!=-1)
    {
        return finish;
    }
    else return -1;
}
int main()
{
    int a[100000],q,n;
    cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<q;i++)
    {
        int x,y;
        cout<<"type ";
        cin>>x>>y;
        if(x==1)
        {
            cout<<FirstSearch(a,n,y)<<endl;
        }
        else{
            cout<<FinishSearch(a,n,y)<<endl;
        }
    
    }
}*/
/*#include <iostream>
using namespace std;
bool MyLinearSreach(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
            return true;
    }
    return false;
}
int main()
{
    int a[100000],n,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        bool find=true;
        while(find==true)
        {
            bool t=MyLinearSreach(a,i,x);
            if(t==true)
            {
                x++;
                find=true;
            }
            else
                find=false;
            
        }
        cout<<x<<" ";
    }

}*/
/*#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int m,n,sum=0;string blist[1000], email[100000];
    cin>>m;
    cin.ignore();
    for(int i=0;i<m;i++)
        getline(cin,blist[i]);
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        getline(cin,email[i]);
        string s=email[i];
        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            for(int j=0;j<m;j++)
                if(blist[j]==word)sum++;
        }
    }
    if(sum==0)
        cout<<"No spam found"<<endl;
    else 
        cout<<sum<<endl;
    return 0;
    
}*/
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct DS{
    long long id;
    long long floor;
};
long long binary(vector<DS>& id,long long n, long long x)
{
    long long l=0,r=n-1;
    while (l<=r)
    {
        long long m=l+(r-l)/2;
        if(id[m].id==x)
        {
            return id[m].floor;
        }
        else if(id[m].id>x)
        {
            r=m-1;
        }
        else 
            l=m+1;
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,x;cin>>n;
    vector<DS> id(n);
    for(long long i=0;i<n;i++)
    {
        cin>>id[i].id>>id[i].floor;
    }
    cin>>x;
    long long s=binary(id,n,x);
    if(s==-1)
    {
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<s<<endl;
    }
}*/
/*#include <iostream>
using namespace std;

int main()

{
    long long n,a[n];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long x;
    cin>>x;
    long long l=0,r=n-1;
    while(l<=r)
    {
        long long m=l+(r-l)/2;
        if((r-l)==1&&a[l]<x&&a[r]>x)
        {
            cout<<a[r];
            break;
        }
        else if(a[m]==x)

        {
            cout<<a[m];
            break;
        }
        else if(a[m]>x)
        {
            l=m;
        }
        else{
            r=m;
            }
            }
            return 0;
            {
                *//*
#include <iostream>
#include <vector>
using namespace  std;
               
int linearSreach(vector<int>a,int n,int x)
{
for(int i=0; i<n;i++)
{
    if(a[i]==x)
        return i;
}
    return -1;
}
int BinarySreach(vector<int>a,int n,int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
    int m=l+(r-l)/2;
        if(a[m]==x)
        {
            return m;
        }
        else if(a[m]>x)
        {
            r=m-1;
        }
        else 
        {
            l=m+1;
        }
    }
    return -1;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n;
    vector<int> a(n);
    for(auto&x:a)
        cin>>x;
    cin>>x;
    cout<<linearSreach(a,n,x)<<endl;
    cout<<BinarySreach(a,n,x)<<endl;
    return 0;

}*/

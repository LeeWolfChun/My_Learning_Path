/*#include <iostream>
#include <vector>
using namespace std;
void MyInsertionSort(vector<int>a, int n)
{
    cout<<"Mang truoc khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl<<endl;
    cout<<"Sap xep:"<<endl;
    for(int i=1;i<n;i++)
    {
        int k=i;
        cout<<"i = "<<i<<endl;
        cout<<"Mang truoc khi xu ly: ";
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl; 
        cout<<"Phan tu dang xet A["<<i<<"] = "<<a[i]<<endl;
        while(k>0&&(a[k]<=a[k-1]))
        {
            swap(a[k],a[k-1]);
            k--;
        }
        cout<<"Chen "<<a[k]<<" vao vi tri k = "<<k<<endl;
        cout<<"Mang sau khi xu ly: ";
        for(auto x:a)
        cout<<x<<" ";
        cout<<endl<<endl;
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)
    {
        cin>>x;
    }
    MyInsertionSort(a,n);
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;
void MyInsertionSort(vector<int>a, int n)
{
    cout<<"Mang truoc khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl<<endl;
    cout<<"Sap xep:"<<endl;
    for(int i=1;i<n;i++)
    {
        int k=i;
        cout<<"i = "<<i<<endl;
        cout<<"Mang truoc khi xu ly: ";
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl; 
        cout<<"Phan tu dang xet A["<<i<<"] = "<<a[i]<<endl;
        while(k>0&&(a[k]>=a[k-1]))
        {
            swap(a[k],a[k-1]);
            k--;
        }
        cout<<"Chen "<<a[k]<<" vao vi tri k = "<<k<<endl;
        cout<<"Mang sau khi xu ly: ";
        for(auto x:a)
        cout<<x<<" ";
        cout<<endl<<endl;
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)
    {
        cin>>x;
    }
    MyInsertionSort(a,n);
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;
void MySelectionSort(vector<int>a,int n)
{
    cout<<"Mang truoc khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl<<endl;
    cout<<"Sap xep:"<<endl;
    for(int i=0;i<n-1;i++)
    {
        int max=i;
    //line 1
            cout<<"i = "<<i<<endl;
    //line 2
        cout<<"Mang truoc khi swap: ";
        {
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl;
        }
    //line 3
        cout<<"Phan tu lon nhat trong doan ["<<i+1<<", "<<n-1<<"]: ";
        {
        for(int j=i;j<n;j++)
        if(a[j]>a[max]) max=j;
        cout<<a[max]<<endl;
        }
    //line 4
        cout<<"Swap "<<a[i]<<" va "<<a[max]<<endl;
        {
        if(a[i]!=a[max])
        {
            swap(a[i],a[max]);
        }
        }   
    //line 5
        cout<<"Mang sau khi swap: ";
        {
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl<<endl;
        }
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";

}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)
    {
        cin>>x;
    }
    MySelectionSort(a,n);
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;
void MySelectionSort(vector<int>a,int n)
{
    cout<<"Mang truoc khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl<<endl;
    cout<<"Sap xep:"<<endl;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
    //line 1
            cout<<"i = "<<i<<endl;
    //line 2
        cout<<"Mang truoc khi swap: ";
        {
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl;
        }
    //line 3
        cout<<"Phan tu nho nhat trong doan ["<<i+1<<", "<<n-1<<"]: ";
        {
        for(int j=i;j<n;j++)
        if(a[j]<a[min]) min=j;
        cout<<a[min]<<endl;
        }
    //line 4
        cout<<"Swap "<<a[i]<<" va "<<a[min]<<endl;
        {
        if(a[i]!=a[min])
        {
            swap(a[i],a[min]);
        }
        }   
    //line 5
        cout<<"Mang sau khi swap: ";
        {
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl<<endl;
        }
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";

}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)
    {
        cin>>x;
    }
    MySelectionSort(a,n);
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void MyMergeSort(vector<int>a, int n)
{
    cout<<"Mang truoc khi sap xep:"<<endl;
    for(auto x:a) cout<<x<<" ";
    cout<<endl<<endl;cout<<"Sap xep:"<<endl;
        
    for(int k=1;k<n;k*=2)
    {
        vector<int>b,c;
        b.clear();c.clear();
        int i=0;
        cout<<"k = "<<k<<endl;
        cout<<"Mang A (truoc khi chia): ";
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl;
        while(i<n)
        {
            for(int j=1;j<=k&&i<n;j++)
            {
                b.push_back(a[i++]);
            }
            for(int j=1;j<=k&&i<n;j++)
            {
                c.push_back(a[i++]);
            }
        }
        cout<<"Mang B: ";
        for(auto x:b)
            cout<<x<<" ";
        cout<<endl;
        cout<<"Mang C: ";
        for(auto x:c)
            cout<<x<<" ";
        cout<<endl;
        // biến quản lý vị trí trong b c
        int ib=0,ic=0;
        a.clear();
        while(ib< b.size() ||ic < c.size())
        {      
            int limb=min((int)b.size(),ib+k);
            int limc=min((int)c.size(),ic+k);
            int i=ib,j=ic;
            while(i<limb&&j<limc)
            {
                if(b[i]>c[j]) a.push_back(c[j++]);
                else
                    a.push_back(b[i++]);
            }
            while(i<limb) a.push_back(b[i++]);
            while(j<limc) a.push_back(c[j++]);
            ib=limb;
            ic=limc;
        }
        cout<<"Mang A (sau khi gop): ";
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl<<endl;
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
}
int main ()
{
    int n; cin>> n;
    vector<int> a(n);
    for(auto&x:a)
        cin>>x;
    MyMergeSort(a,n);
}
*/
/*
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void MyMergeSort(vector<int>a, int n)
{
    cout<<"Mang truoc khi sap xep:"<<endl;
    for(auto x:a) cout<<x<<" ";
    cout<<endl<<endl;cout<<"Sap xep:"<<endl;
        
    for(int k=1;k<n;k*=2)
    {
        vector<int>b,c;
        b.clear();c.clear();
        int i=0;
        cout<<"k = "<<k<<endl;
        cout<<"Mang A (truoc khi chia): ";
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl;
        while(i<n)
        {
            for(int j=1;j<=k&&i<n;j++)
            {
                b.push_back(a[i++]);
            }
            for(int j=1;j<=k&&i<n;j++)
            {
                c.push_back(a[i++]);
            }
        }
        cout<<"Mang B: ";
        for(auto x:b)
            cout<<x<<" ";
        cout<<endl;
        cout<<"Mang C: ";
        for(auto x:c)
            cout<<x<<" ";
        cout<<endl;
        // biến quản lý vị trí trong b c
        int ib=0,ic=0;
        a.clear();
        while(ib< b.size() ||ic < c.size())
        {      
            int limb=min((int)b.size(),ib+k);
            int limc=min((int)c.size(),ic+k);
            int i=ib,j=ic;
            while(i<limb&&j<limc)
            {
                if(b[i]<c[j]) a.push_back(c[j++]);
                else
                    a.push_back(b[i++]);
            }
            while(i<limb) a.push_back(b[i++]);
            while(j<limc) a.push_back(c[j++]);
            ib=limb;
            ic=limc;
        }
        cout<<"Mang A (sau khi gop): ";
        for(auto x:a)
            cout<<x<<" ";
        cout<<endl<<endl;
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
}
int main ()
{
    int n; cin>> n;
    vector<int> a(n);
    for(auto&x:a)
        cin>>x;
    MyMergeSort(a,n);
}
*/
/*
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void MyHeapify(vector<int>&a,int n,int i)
{
    int l=2*i+1, r=2*i+2;
    int largest=i;
    if(l<n&&a[l]>a[largest])largest=l;
    if(r<n&&a[r]>a[largest])largest=r;
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        MyHeapify(a,n,largest);
    }
}
void BuildHeap(vector<int>&a,int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        MyHeapify(a,n,i);
    }
}
void MyHeapSort(vector<int>&a, int n)
{
    cout<<"Mang truoc khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl<<endl;
    cout<<"Sap xep:"<<endl;
    cout<<"Mang sau khi BuildHeap: ";
    BuildHeap(a,n);
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    cout<<"Swap "<<a[0]<<" va "<<a[n-1]<<endl<<endl;
    swap(a[0],a[n-1]);
    for(int i=n-1;i>0;i--)
    {   MyHeapify(a,i,0);
        cout<<"Mang sau khi heapify voi n = "<<i<<": ";
        for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
            if(j==i-1)
                cout<<"| ";
        }
        if(i==1){cout<<endl<<endl;break;}
        cout<<endl;
        cout<<"Swap "<<a[0]<<" va "<<a[i-1];
        swap(a[0],a[i-1]);
        cout<<endl<<endl;
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
}
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a)
        cin>>x;
    MyHeapSort(a,n);
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void MyHeapify(vector<int>&a,int n,int i)
{
    int l=2*i+1, r=2*i+2;
    int largest=i;
    if(l<n&&a[l]<a[largest])largest=l;
    if(r<n&&a[r]<a[largest])largest=r;
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        MyHeapify(a,n,largest);
    }
}
void BuildHeap(vector<int>&a,int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        MyHeapify(a,n,i);
    }
}
void MyHeapSort(vector<int>&a, int n)
{
    cout<<"Mang truoc khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl<<endl;
    cout<<"Sap xep:"<<endl;
    cout<<"Mang sau khi BuildHeap: ";
    BuildHeap(a,n);
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    cout<<"Swap "<<a[0]<<" va "<<a[n-1]<<endl<<endl;
    swap(a[0],a[n-1]);
    for(int i=n-1;i>0;i--)
    {   MyHeapify(a,i,0);
        cout<<"Mang sau khi heapify voi n = "<<i<<": ";
        for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
            if(j==i-1)
                cout<<"| ";
        }
        if(i==1){cout<<endl<<endl;break;}
        cout<<endl;
        cout<<"Swap "<<a[0]<<" va "<<a[i-1];
        swap(a[0],a[i-1]);
        cout<<endl<<endl;
    }
    cout<<"Mang sau khi sap xep:"<<endl;
    for(auto x:a)
        cout<<x<<" ";
}
int main()
{
    int n; cin>>n;
    vector<int> a(n);
    for(auto &x:a)
        cin>>x;
    MyHeapSort(a,n);
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
using namespace std;
void xuat(const vector<int>& a){
for (int i = 0; i < (int)a.size(); i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}
void MyQuickSort(vector<int>&a,int l,int r)
{   
    if(l>=r) return;
    
    cout<<"Truoc: ";xuat(a);
    int pivot =a[m];
    cout<<"Left="<<l<<" - Right="<<r<<" - Pivot="<<pivot<<endl;
    int i=l,j=r;
    while(i<j)
    {
        while(a[i]<pivot)i++;
        while(a[j]>pivot)j--;
        if(i<=j)
        {
            swap(a[i],a[j]);i++;j--;
        }
    }
    cout<<"Sau: ";xuat(a);
    cout<<endl;
    if(j>l)MyQuickSort(a,l,j);
    if(i<r)MyQuickSort(a,i,r);
}
int main()
{
    int n; cin>>n;
    int l=0,r=n-1;
    vector<int> a(n);
    for(auto &x:a)
        cin>>x;
    cout<<"Mang truoc khi sap xep:"<<endl;
    xuat(a);cout<<endl;
    cout<<"Sap xep:"<<endl;
    MyQuickSort(a,l,r);
    cout<<"Mang sau khi sap xep:"<<endl;
    xuat(a);
    return 0;
}*/
/*
#include <iostream>
#include <vector>
using namespace std;
void xuat(const vector<int>& a){
for (int i = 0; i < (int)a.size(); i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}
void MyQuickSort(vector<int>&a,int l,int r)
{   
    if(l>=r) return;
    int m=(l+r)/2;
    cout<<"Truoc: ";xuat(a);
    int pivot =a[m];
    cout<<"Left="<<l<<" - Right="<<r<<" - Pivot="<<pivot<<endl;
    int i=l,j=r;
    while(i<j)
    {
        while(a[i]>pivot)i++;
        while(a[j]<pivot)j--;
        if(i<=j)
        {
            swap(a[i],a[j]);i++;j--;
        }
    }
    cout<<"Sau: ";xuat(a);
    cout<<endl;
    if(j>l)MyQuickSort(a,l,j);
    if(i<r)MyQuickSort(a,i,r);
}
int main()
{
    int n; cin>>n;
    int l=0,r=n-1;
    vector<int> a(n);
    for(auto &x:a)
        cin>>x;
    cout<<"Mang truoc khi sap xep:"<<endl;
    xuat(a);cout<<endl;
    cout<<"Sap xep:"<<endl;
    MyQuickSort(a,l,r);
    cout<<"Mang sau khi sap xep:"<<endl;
    xuat(a);
    return 0;
}
*//*
#include <iostream>
#include <vector>
using namespace std;
void MyInsertionSort(vector<int>a, int n)
{   
    vector<int>b(n);int t=0;
    for(auto&x:b)
    {
        x=t;t++;
    }
    int min=0;
    bool Swap=false;
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        int min=i;
        while(j<n)
        {
            if(a[j]<a[min]){
                min=j;
                Swap=true;
            }
            j++;
        }
        if(Swap==true)
        {
            swap(a[i],a[min]);
            swap(b[i],b[min]);
            ;Swap=false;
        }
    }
    for(auto x:b)
        cout<<x<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto&x:a)
    {
        cin>>x;
    }
    MyInsertionSort(a,n);
    return 0;
}*/
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void xuat(const vector<int>& a){
for (int i = 0; i < (int)a.size(); i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}
void MyQuickSort(vector<int>&a,int l,int r)
{   
    if(l>=r) return;
    int m=(l+r)/2;
    int pivot =a[r];
    int i=l,j=r;
    while(i<j)
    {
        while(a[i]<pivot)i++;
        while(a[j]>pivot)j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;j--;
        }
    }
    xuat(a);
    int target = pivot;
    auto it = std::find(a.rbegin(), a.rend(), target);

    if (it != a.rend()) {
        int last_index =distance(it, a.rend()) - 1;
    cout<<last_index;
}}
int main()
{
    int n; cin>>n;
    int l=0,r=n-1;
    vector<int> a(n);
    for(auto &x:a)
        cin>>x;
    
    MyQuickSort(a,l,r);
    return 0;
}*/
/*
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void MyMergeSort(vector<pair<int,int>>&a, int n)
{
    for(int k=1;k<n;k*=2)
    {
        vector<pair<int,int>>b,c;
        b.clear();c.clear();
        int i=0;
        while(i<n)
        {
            for(int j=1;j<=k&&i<n;j++)
            {
                b.push_back(a[i++]);
            }
            for(int j=1;j<=k&&i<n;j++)
            {
                c.push_back(a[i++]);
            }
        }
        int ib=0,ic=0;
        a.clear();
        while(ib< b.size() ||ic < c.size())
        {      
            int limb=min((int)b.size(),ib+k);
            int limc=min((int)c.size(),ic+k);
            int i=ib,j=ic;
            while(i<limb&&j<limc)
            {
                if(b[i]>=c[j]) a.push_back(c[j++]);
                else
                    a.push_back(b[i++]);
            }
            while(i<limb) a.push_back(b[i++]);
            while(j<limc) a.push_back(c[j++]);
            ib=limb;
            ic=limc;
        } 
    }
    for(auto x:a)
        cout<<x.second<<" ";
}
int main ()
{
    int n; cin>> n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    MyMergeSort(a,n);
}
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void MyQuickSort(vector<pair<int, int>>& a,int l,int r,int n)
{   
    int pivot =a[n-1].first;
    int target_value = a[n-1].first;
    int target_original_index = a[n-1].second;
    int i=l,j=r;
    while(i<=j)
    {
        while(a[i].first<pivot)i++;
        while(a[j].first>pivot)j--;
        if(i<=j)
        {
            swap(a[i],a[j]);i++;j--;
        }
    }
    for(const auto &x:a)
        cout<<x.first<<" ";
    cout<<endl;
    for (int i = 0; i < a.size(); i++) {
        if (a[i].first == target_value && a[i].second == target_original_index) {
            cout << i << endl;
            break;
        }
    }
    return ;
}
int main()
{  
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;   
        a[i].second = i;
    }
    int l=0,r=n-1;
    MyQuickSort(a,l,r,n);
}
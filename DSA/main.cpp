#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class DaThuc
{
    private:
    int bac;
    vector <int> a;
    public:
        void KhoiTao(int x)
        {
            a=vector<int> (x,0);
        }
        void Nhap()
        {
            cin>>bac;
            vector<int> a(bac);
            for(auto &x:a)
            {
                cin>>x;
            }
        }
        void Xuat()
        {
            for(int i=bac;i>=0;i--)
            {
                cout<<a[i];
                if(i>0)
                {
                    cout<<"x^"<<i<<" + ";
                }
            }
        }
        int Tinh(int x)
        {
            int sum =0;
            for(int i=bac;i>=0;i--)
            {
                sum+=a[i]+pow(x,i);
            }
            return sum;
        }
        DaThuc operator+(const DaThuc& other)
        {
            int bacmax=(this->bac,other.bac)?this->bac:other.bac;
            DaThuc result;
            result.KhoiTao(bacmax);
            for(int i=0;i<=bacmax;i++)
            {
                int hs1=(i<=this->bac)?this->a[i]:0;
                int hs2=(i<=other.bac)?other.a[i]:0;
                result.a[i]=hs1+hs2;
            }
            return result;
        }


    };
int main()
{
    DaThuc dt1,dt2;
    dt1.Nhap();
    dt2.Nhap();
    DaThuc dt3 =dt1+dt2;
    dt3.Xuat();


}
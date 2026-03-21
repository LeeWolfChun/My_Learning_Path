#include <iostream>
#include <cmath>
using namespace std;
struct point
{
    double x;
    double y;
};
class TamGiac
{
private:
    point A,B,C;
public:
    void Nhap()
    {
        cin>>A.x>>A.y;
        cin>>B.x>>B.y;
        cin>>C.x>>C.y;
    };
    void Xuat()
    {
        cout<<"A("<<A.x<<","<<A.y<<")"<<endl;
        cout<<"B("<<B.x<<","<<B.y<<")"<<endl;
        cout<<"C("<<C.x<<","<<C.y<<")"<<endl;
    };
    void PhongTo(double k)
    {
        if(k<1)
        {
            cout<<"ko the phong to"<<endl;
        }
        else{
            A.x*=k;
            A.y*=k;
            B.x*=k;
            B.y*=k;
            C.x*=k;
            C.y*=k;
        }
    };
    void ThuNho(double k)
    {
        if(k<1)
        {
            cout<<"ko the thu nho"<<endl;
        }
        else{
            A.x/=k;
            A.y/=k;
            B.x/=k;
            B.y/=k;
            C.x/=k;
            C.y/=k;
        }
    };
    void Xoay(double goc)
    {
        double rad=goc*M_PI/180;
        double xnew,ynew;
         xnew= A.x*cos(rad)-A.y*sin(rad);
         ynew= A.x*sin(rad)+A.y*cos(rad);
        A.x=xnew;
        A.y=ynew;
         xnew= B.x*cos(rad)-B.y*sin(rad);
         ynew= B.x*sin(rad)+B.y*cos(rad);
        B.x=xnew;
        B.y=ynew;
         xnew= C.x*cos(rad)-C.y*sin(rad);
         ynew= C.x*sin(rad)+C.y*cos(rad);
        C.x=xnew;
        C.y=ynew;

    }
};
struct Node
{
    int data;
    Node *next;
};
class MyQueue
{
    private:
        Node *front;//quản lý đầu hàng
        Node *rear;//quản lý cuối hàng
        int size;
    public:
        MyQueue()
        {
            front=rear=NULL;
            size=0;
        }
        // 2. Phương thức thêm vào cuối (Enqueue)
        void Enqueue(int x)
        {
            Node *newnode= new Node;
            newnode->data =x;
            if(rear==NULL)
            {
                front=rear=newnode;
            }
            else 
            {
                rear->next=newnode;
                rear=newnode;
            }
            size++;
        }
        // 3. Phương thức lấy ra ở đầu (Dequeue)
        int Dequeue()
        {
            int value;
            if(front==NULL) return -1;
            Node* temp=front;
            value=temp->data;
            front=front->next;
            size--;
            delete temp;
            if(front == NULL) rear==NULL;
            return value;
        }
        
};

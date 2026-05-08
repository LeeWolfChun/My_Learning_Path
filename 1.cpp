#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *pNext;

    Node(int t): data(t),pNext(nullptr){};
};
class List
{
    private:
        Node *pHead;
        Node *pTail;
        int size;
    public:
        
        List()
        {
            pHead=pTail=nullptr;
            size=0;
        }
        void PrintList(List &L)
        {
            Node *curr=pHead;
            while(curr!=nullptr)
            {
                cout<<curr->data;
                curr=curr->pNext;
            }
        }
        void insert(List &L, Node* T)
        {
            if(T==nullptr)
            {
                return;
            }

            if(L.pHead==nullptr)
            {
                size++;
                L.pHead=L.pTail=T;
            }
            else
            {
                pTail->pNext=T;
                pTail=T;
                size++;
            }
        }
        void Testing()
        {
            Node *curr=pHead;
            if (pHead == nullptr || pHead->pNext == nullptr) {
                return;
            }
            while(curr->pNext!=nullptr)
            {
                if(curr->pNext->pNext->data=='#')
                {
                    Node *del=curr->pNext;
                    curr->pNext=del->pNext->pNext;
                    if(del==pTail)
                        pTail=curr;
                    delete del->pNext;
                    delete del;
                    size-=2;
                }
                else
                    curr=curr->pNext;
            }
        }

    };
    Node* createNode(int t)
        {
            return new Node(t);
        }
int main()
{
    List L;
    int n;
    cin>>n;
    if(n<0)
        return 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        L.insert(L,createNode(x));
    }
    L.Testing();
    L.PrintList(L);
}
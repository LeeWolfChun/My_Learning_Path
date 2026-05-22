#include <iostream>
#include <vector>

using namespace std;
struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int val):key(val),left(nullptr),right(nullptr){}
};
void insert(Node* &root, int val ) 
{
    if(root==nullptr)
    {
        root=new Node(val);
        return;
    } 
    if(val>root->key) insert(root->right,val);
    else if(val<root->key)insert(root->left,val);
}
void printLNR(Node* root)
{
    if(root==nullptr)return;
    printLNR(root->left);
    cout<<root->key<<" ";
    printLNR(root->right);
}
int countLevel(Node* root,int val,int cLevel)
{
    if(root==nullptr)return -1;
    if(root->key==val) return cLevel;
    else if(root->key>val)  
    {
        return countLevel(root->left,val,cLevel+1);
    }
    else if(root->key<val)
    {
        return countLevel(root->right,val,cLevel+1);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>Btree(n);
    Node* root=nullptr;
    for(int i=0; i<n;i++)
    {
        cin>>Btree[i];
        insert(root,Btree[i]);
    }
    int x;
    cin>>x;
    int cLevel=0;
    cout<<countLevel(root,x,0);
}
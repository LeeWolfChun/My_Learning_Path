#include <iostream>
#include <vector>
#include <cmath>

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

int HBTree(Node *root)
{
    if(root==nullptr)
    {
        return -1;
    }
    return 1+max(HBTree(root->left),HBTree(root->right));
    
}

void delTree(Node* &root)
{
    if(root==nullptr)return;
    delTree(root->left);
    delTree(root->right);
    delete root;
    root=nullptr;
}

int maxLevel(Node *root)
{
    if(root==nullptr)return 0;
    if(root->left==nullptr&&root->right==nullptr)
    {
        return 0;
    }
    int bacCuaToi=0;
    if(root->left!=nullptr&&root->right!=nullptr)
    {
        bacCuaToi= 2;
    }
    else if(root->left!=nullptr||root->right!=nullptr)
    {
        bacCuaToi= 1;
    }
    return max(bacCuaToi,max(maxLevel(root->left),maxLevel(root->right)));
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
    cout<<maxLevel(root);
    delTree(root);
    return 0;
}

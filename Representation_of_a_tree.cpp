#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod  = 1e9+7;

struct Node
{
    int data;
    struct Node*left;
    struct Node*right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

int main()
{
    struct Node * root;
    root = new Node(1);
    root->left = new Node(2);   
    root->right = new Node(3);
    root->left->right = new Node(5);
    return 0;
}
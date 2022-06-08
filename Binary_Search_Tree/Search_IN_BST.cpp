#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *searchBST(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return searchBST(root->left, key);
    }
    return searchBST(root->right, key);
}

int main()
{

    struct Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1); 
    root->left->right = new Node(3); 
    
    root->right->right = new Node(6);
    /*
            1
           / \
          2   3
         / \  / \
        4  5  6  7

     */
    if (searchBST(root, 5) == NULL)
    {
        cout << "NOT EXIST" << endl;
    }
    else
    {
        cout << "Exist" << endl;
    }
    return 0;
}
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

int sumReplacement(Node *root)
{

    if (root == NULL)
    {
        return 0;
    }
    return sumReplacement(root->left) +
           sumReplacement(root->right) + root->data;
}

int isSumTree(Node *root)
{
    int ls, rs;
    if (root == NULL || root->left == NULL && root->right ==NULL)
    {
        return 1;
    }

    ls = sumReplacement(root->left);
    rs = sumReplacement(root->right);

    if ((root->data == ls + rs) && isSumTree(root->left) && isSumTree(root->right))
{
        return 1;
}
    return 0;
}

void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{

    // struct Node *root = new Node(1);
    // root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
     struct Node *root = new Node(26);
    root->left = new Node(10);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->left = new Node(3);
   
    /*
            1
           / \
          2   3
         / \  / \
        4  5  6  7

     */

    // preorder(root);
    // cout << endl;
    sumReplacement(root);
    // preorder(root);
    // cout << endl;
    if (isSumTree(root))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}

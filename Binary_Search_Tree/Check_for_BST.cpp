#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val > root->data)
    {
        root->right = insertBST(root->right, val);
    }
    else
    {
        // val< root->data
        root->left = insertBST(root->left, val);
    }
    return root;
}
bool checkBST(Node *root,Node* min =NULL,Node* max=NULL)
{
    if (root == NULL)
    {
        return true;
    }

    if(min != NULL && root->data<=min->data){
        return false;
    }
    if(max != NULL && root->data>=max->data){
        return false;
    }
    bool leftValid = checkBST(root->left,min,root);
    bool rightValid = checkBST(root->right,root,max);
    return leftValid and rightValid;
}

void inorderprint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);
}

int main()
{

    /*Node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);*/
    Node* root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(7);

    // print inroder
    // inorderprint(root);
    if(checkBST(root,NULL,NULL)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

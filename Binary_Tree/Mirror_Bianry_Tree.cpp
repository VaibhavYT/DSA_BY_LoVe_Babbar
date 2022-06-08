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
        right= NULL;

    }
};
bool mirrorTree(Node* root ,Node* root2){
    if(root==NULL && root2 == NULL){
        return false;
    }
    if(root==NULL || root2 == NULL){
        return false;
    }
    return root->data == root2->data &&
    mirrorTree(root->left ,root2->right) && mirrorTree(root->right , root2->left);

}

int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    struct Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root2->right->left = new Node(6);
    root2->right->right = new Node(7);
/* 
        1
       / \
      2   3
     / \  / \
    4  5  6  7

 */
if(
mirrorTree(root,root2)){
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

  
  return 0;
   




}

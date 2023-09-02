#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;      //integer type of data is stored in node
    TreeNode* left;  // pointer to the left child node
    TreeNode* right;  // pointer to the right child node
    
    TreeNode(int d){
        data = d;
        left = NULL;
        right = NULL;
    }   //constructor
};

TreeNode* insert(TreeNode* root, int val){
    if(root == NULL){
        return new TreeNode(val);
    } // // If the tree is empty, create a new node and return it as the new root
    if(val < root->data){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }
    return root;
}

void inorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    TreeNode* root = NULL;  // creating a empty BST
    
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    
    cout<<"In-order Travesal of BST is : ";
    inorder(root);
    cout<<endl;
    
    return 0;
    
}


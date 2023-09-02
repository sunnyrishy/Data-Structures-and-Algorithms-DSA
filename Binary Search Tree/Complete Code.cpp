This code includes Insertion, Searching, Deletion, In-Order Traversal, Pre-Order Traversal and Post-Order Traversal in a BST.

  #include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int d){
        data = d;
        left = NULL;
        right = NULL;
        
    }
};

TreeNode* insert(TreeNode* root, int val){
    if(root == NULL){
        return new TreeNode(val);
    }
    
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

void preorder(TreeNode* root) {
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

TreeNode * search(TreeNode* root, int key){
    if(root == NULL || root->data == key){
        return root;
    }
    if(root->data < key){
        return search(root->right, key);
    }
    else{
        return search(root->left, key);
    }
}

TreeNode* deletenode(TreeNode* root, int key){
    if(root == NULL){
        return root;
    }
    if(root->data > key){
        root->left = deletenode(root->left, key);
        return root;
    }
    else if(root->data < key){
        root->right = deletenode(root->right, key);
        return root;
    }
    
    if(root->left == NULL){
        TreeNode* temp = root->right;
        delete root;
        return temp;
    }
    else if(root->right == NULL){
        TreeNode* temp = root->left;
        delete root;
        return temp;
    }
    else {
        TreeNode* Parent = root;
        TreeNode* succ = root->right;
        while(succ->left != NULL){
            Parent = succ;
            succ = succ->left;
        }
        if(Parent != root){
            Parent->left = succ->right;
        }
        else {
            Parent->right = succ->right;
        }
        root->data = succ->data;
        
        delete succ;
        return root;
    }
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
    
    int key = 80;
    
    cout<<"In-order Travesal of BST is : ";
    inorder(root);
    cout<<endl;
    
    cout<<"Pre-order traversal of BST is : ";
    preorder(root);
    cout<<endl;
    
    cout<<"Post-order Traversal of BST is : ";
    postorder(root);
    cout<<endl;
    
    
    TreeNode* result = search(root, key);
    if(result != NULL){
        cout<<"Key "<<key<<" found in the BST !";
    }
    else{
        cout<<"Key "<<key<<" not found in the BST !";
    }
    cout<<endl;
    
    int delete_element = 70;
    root = deletenode(root, delete_element);
    cout<<"Key "<<delete_element<<" is deleted successfully !"<<endl;
    cout<<"In-order Travesal of BST after deleting : ";
    inorder(root);
    cout<<endl;
    return 0;
    
}


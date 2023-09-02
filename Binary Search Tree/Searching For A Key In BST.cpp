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


Call this function by : 

TreeNode* result = search(root, key);
    if(result != NULL){
        cout<<"Key "<<key<<" found in the BST !";
    }
    else{
        cout<<"Key "<<key<<" not found in the BST !";
    }

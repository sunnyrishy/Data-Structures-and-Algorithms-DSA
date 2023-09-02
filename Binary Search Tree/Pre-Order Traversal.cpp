Preorder traversal: In this traversal, we first visit the node, then traverse the right subtree completely and then the left subtree.

  void preorder(TreeNode* root) {
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

Call this function by : 

cout<<"Pre-order traversal of BST is : ";
    preorder(root);
    cout<<endl;

For this Input : 

    50
   / \
  30  70
 / \ / \
20 40 60 80

  Output -> Pre-order traversal of BST is : 50 30 20 40 70 60 80 

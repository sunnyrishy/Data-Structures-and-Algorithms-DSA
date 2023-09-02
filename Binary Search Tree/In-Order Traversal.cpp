Inorder traversal : In this traversal, we first traverse the left subtree completely, then visit the node and in the end traverse the right subtree.


void inorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


Call this by : 

cout<<"In-order Travesal of BST is : ";
    inorder(root);
    cout<<endl;


For this Input : 

    50
   / \
  30  70
 / \ / \
20 40 60 80

  Output ->  In-order Travesal of BST is : 20 30 40 50 60 70 80 

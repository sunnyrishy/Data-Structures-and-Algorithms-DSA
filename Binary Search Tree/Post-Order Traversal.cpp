Postorder traversal: In this traversal, we first traverse the left subtree then the right subtree and in the end visit the node.


void postorder(TreeNode* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}



Call this function by : 

cout<<"Post-order Traversal of BST is : ";
    postorder(root);
    cout<<endl;


For this input : 

    50
   / \
  30  70
 / \ / \
20 40 60 80


  Output -> Post-order Traversal of BST is : 20 40 30 60 80 70 50 

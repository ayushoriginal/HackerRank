
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
    if (root == NULL)
        return -1;
    else if (root->left == NULL && root->right == NULL)
        return 0;
    else
    {
        return height(root->left)>height(root->right) ? height(root->left) + 1: height(root->right) + 1;    
    }
}
  
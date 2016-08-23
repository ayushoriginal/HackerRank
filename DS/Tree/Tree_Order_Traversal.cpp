/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include<queue>
void LevelOrder(node * root)
{
    
  //  std::queue<int> first; 
    node* temp;
    std::queue<node*> Q;
    Q.push(root);
    if(root == NULL)
        return;
    while(!Q.empty())
    {
        temp = Q.front(); Q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
            Q.push(temp->left);
        if(temp->right!=NULL)
            Q.push(temp->right);
    }
  
}

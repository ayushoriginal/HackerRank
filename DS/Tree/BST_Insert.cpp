/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    
    
    if(root==NULL)
    {
        node* temp = new node();
        temp->data = value;
        return temp;
    }
    else if (value<= root->data)
    {
        if(root->left ==  NULL)
        {
            node* temp = new node();
            temp->data = value;
            root->left = temp;
            return root;
        }
        else
        {
            insert(root->left,value);   
            return root;
        }   
    }   
    else if (value> root->data)
    {
        if(root->right ==  NULL)
        {
            node* temp = new node();
            temp->data = value;
            root->right = temp;
            return root;
        }
        else
        {
            insert(root->right,value);   
            return root;
        }   
    }      
    return root;
}

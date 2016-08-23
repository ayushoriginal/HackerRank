/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include<vector>
void top_view(node * root)
{
    vector<node*> v;
 
    node* temp = root;
    while(temp!=NULL)
    {
        v.push_back(temp);
        temp= temp->left;
    }
    std::reverse(v.begin(),v.end());
   
    if (root->right !=NULL)
    {
        node* temp2 = root->right;    
        while(temp2!=NULL)
        {
            v.push_back(temp2);
            temp2 = temp2->right;
        }   
  
    }
    for(std::vector<node*>::iterator ii = v.begin();ii!=v.end();++ii)
        cout<<(*ii)->data<<" ";
}

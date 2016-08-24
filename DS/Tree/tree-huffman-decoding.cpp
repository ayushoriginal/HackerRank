/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/
bool isLeaf(node* root)
{
    if(root->left ==  NULL && root->right == NULL)
        return true;  
    return false;
    
}
void decode_huff(node * root,string s)
{
    node* temp = root;
    for(int i=0;i<s.length();i++)
    {
       
        if(s[i] == '0')
        {
            if(temp->left !=NULL)
                temp = temp->left;
            else if (isLeaf(temp))
            {
                cout<<temp->data;
                temp=root;
                i--;
            }
        }
        else if (s[i] == '1')
        {
            if(temp->right !=NULL)
                temp = temp->right;
            else if(isLeaf(temp))
            {
                cout<<temp->data;
                temp=root;
                i--;
            }
        }
        else
            cout<<"wrong input";
    }
    cout<<temp->data;
}
/*
    q1. Height of the binary tree.
*/
#include "iostream"
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
int height(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
          int lheight = height(root->left);
          int rheight = height(root->right);
          if(lheight>rheight)
          {
              return lheight+1;
          }
          else
          {
              return rheight +1;
          }
          
    }
    
  

}
struct node* new_Node(int data)
{
    node* Node = new node;
    Node->data = data;
    Node->left = NULL;
    Node->right =NULL;

}
int main()
{

}
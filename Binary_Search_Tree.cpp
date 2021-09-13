#include "iostream"
#include "algorithm"
#include "map"
#include "vector"
#include "string"
#include "math.h"
using namespace std;
struct node
{
    int data;
    struct node *left ; 
    struct node *right;
};
struct node* new_node(node* root, int data)
{   
    node * Node = new node();
    Node->left = NULL;
    Node->right = NULL;
    

}
int main()
{

}
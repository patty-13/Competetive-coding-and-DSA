/*
    Binary Tree
    Top most node is called the root node.
    The elements that are directly under them are called its children
    The element above it is called its parent.
    Why use trees. -> to store information hirearchy
    ex file system in computer
    searh time -> quicker than linked list and slower than arrays
    insertion/deletion -> quicker than arrays and slower than unordered
    linked lists.
    no upper limits of nodes.

    Usage of binary trees
    1. Manipulate hierarchiel data
    2. Make information easy to search
    3. Manipulate the soreted lists of data.
    4. Router algorithms

    important points for binary tree.
    -> a tree whose elements have at most 2 children is called a 
        binary tree. (left child and right child)
*/
// #include "iostream"
// using namespace std;

//     // basic denotions for a tree
//     struct node
//     {
//         int data;
//         struct node *left;
//         struct node *right;
//     };
//     // allocating the data to the nodes funciton
//     struct node* new_node(int data)
//     {
//         struct node* node = (struct node*)malloc(sizeof(struct node));
//         node->data = data;
//         node->left = NULL;
//         node->right = NULL;
//         return(node);
//     }
    
// int main()
// {
//     struct node *root = new_node(1);
    
//     root->left = new_node(2);
//     root->right = new_node(3);
//     root->left->left = new_node(4);
//     return 0;
// }
/*
1.The maximum number of nodes at level 1 of a binary tree is 2^n
2.Maximum number of nodes in a binary tree of height 'h' is 2^h-1
    (it goes as geometric progreesion such as 2 + 4 + ... 2^h-1)
3. in binary tree wiht n nodes, minimum possible height  or minimum
    number of levels is Log2(n+1)
4. Binary tree with l leaves has at least Log2L+1 Levels.
*/

/*
Full Binary tree is a full binary tree if every node has 0 or 2 children
The number of leaf nodes are = Number of leaf nodes + 1
    L = l + 1

COMPLETE BINARY TREE : a binary tree is a complete binary tree if all
the levels are completely filled except possibly the last level

Perfect binary tree : a binary tree is a perfect binary tree in which all
the internal nodes have two children and all leaf nodes are at the same level.


->Balanced binary tree is balanced if the height of the trees is o(Logn)
  when n is the number of nodes.
->avl trees the difference between the right and left sub-tree height is almost 1
-> red black trees maintain 

important trees
-> Binary search tree
-> heap
-> b-tree b+tree
-> syntax tree
-> k-d tree
-> trie
-> suffix tree
-> spanning tree




*/

/*
    LEVEL ORDER TRAVESAL THAT IS BREADTH FIRST TRAVESAL FOR THE TREE
*/
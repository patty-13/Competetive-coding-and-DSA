/*
    Depth First Search
    Stack either our own or the call stack recrusion 
    LIFO Approach that is last in first out.
    Uses. Backtracking, complete search, exhausting possible paths.
    Goes deep

    time O(|v| + |E|)
    space O(|v|)


    Breadth first search
    follows queue that is FIRST IN FIRST OUT
    check if a path exists between the nodes finding "hops" or
    distance out or levels away.
    Goes wide.

*/
//----------------------------BFS------------------------------------//
/*
    Algorithm 1. print all the nodes at the given level.
              2. print level order traversal of the tree.
*/
// #include "iostream"
// using namespace std;
// struct node
// {
//     int data;
//     node *left, *right;
// };

// struct node* new_Node(int data)
// {
//     struct node* Node;
//     Node = (struct node*)malloc(sizeof(struct node));
//     Node->data = data;
//     Node->right = NULL;
//     Node->left = NULL;
// }
// void printLevelorder(node* root)
// {
//     for(int i=1;i<height(root);i++)
//     {
//         printGivenLevel(root,i);
//     }
// }
// int printGivenLevel(node* root,int  level)
// {
//     if(root == NULL)
//     {
//         return 0;
//     }
//     if(level == 1)
//     {
//         cout<<root->data;
//     }
//     else if(level>1)
//     {

//         printGivenLevel(root->left,level-1);
//         printGivenLevel(root->right,level-1);
//     }
    
// }
// int height(node* root)
// {
//     if(root == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         int left_height = height(root->left);
//         int right_height = height(root->right);
//         if(left_height>right_height)
//         {
//             return(left_height+1);
//         }
//         else
//         {
//             return(right_height +1);
//         }
        
//     }
    
// }
// int main()
// {
//     node* root= new_Node(1);
//     root->left = new_Node(2);
//     root->right = new_Node(3);
// }


/*
 <----------------------------- BFS USING QUEUE------------------------>
*/
// #include "iostream"
// #include "algorithm"
// #include "queue"
// using namespace std;
// struct node
// {
//     int data;
//     struct node *left,*right;
// };
// void printLevelOrder(node* root)
// {
//     if(root == NULL)
//     {
//         return ;
//     }
//     // creating an empty queue for level oreder traversal
//     queue<node*> q;
//     q.push(root);
//     while(q.empty() == false)
//     {
//         // Print the fron of the queue and remove it from the queue.
//         node *Node = q.front();
//         cout<<Node->data<<" ";
//         q.pop();
//         if(Node->left != NULL)
//         {
//             q.push(Node->left);
//         }
//         if(Node->right!= NULL)
//         {
//             q.push(Node->right);
//         }
        
//     }

// }
// struct node* new_Node(int data)
// {
//     node* Node = new node;
//     Node->data = data;
//     Node->left = NULL;
//     Node->right = NULL;
// }
// int main()
// {
//     node* root = new_Node(1);
//     root->left = new_Node(2); 
//     root->right = new_Node(3); 
//     root->left->left = new_Node(4); 
//     root->left->right = new_Node(5);
//     printLevelOrder(root); 
//   return 0;
// }

//<----------------------------- DIAMETER OF A BINARY TREE ----------->
/*
    The diameter of the tree is the number of  nodes on the longest path
    between two end nodes.
    The diameter of a tree T is the largest of the following quantities:

* the diameter of T’s left subtree
* the diameter of T’s right subtree
* the longest path between leaves that goes through the root of 
  T (this can be computed from the heights of the subtrees of T)

compute the ldiameter and rdiameter and then compute
make a max(lheight + rheight +1, max(ldiamter,rdiamter))

*/
//<--------------------------------Inorder traversal or DFS------------>
/*
    it without recursion or using stack its the same as using queue
    Algorithm 
*/
// #include "iostream"
// #include "algorithm"
// #include "stack"
// using namespace std;
// struct node
// {
//     int data;
//     node *left ,*right;
// };
// void printInorder(node* root)
// {
//     if(root ==NULL)
//     {
//         return;
//     }
//     stack<node*> s;
//     s.push(root);
//     while(q)

// }
// node* new_Node(int data)
// {
//     node* Node = new node;
//     Node->data = data;
//     Node->right = NULL;
//     Node->left = NULL;
// }
// int main()
// {
//     node* root = new_Node(1);
//     root->left = new_Node(2); 
//     root->right = new_Node(3); 
//     root->left->left = new_Node(4); 
//     root->left->right = new_Node(5);
// }

//if given two travel sequences can you construct the binary tree.
/*
    There fore the following combinations can uniquely identify the tree
    Inorder and preorder
    Inorder and postorde
    Inorder and Level-order

*/

//Inorder travesal
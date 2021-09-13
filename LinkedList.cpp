/*
    Rearrange the linked lists.

    1 2 3 4 5 6 -> 1 6 2 5 3 4
    1. insert the element at the end
    2. print the element
    3. split the linked list -> middle elements
    4.  Reverse the second half
    5. merge the first half + reversed the second half
    6. Print the rearranged linked list.
*/
#include "iostream"
using namespace std;
struct node
{
    int data;
    node* next;
};
void  new_node(struct node** head,int new_data)
{
    node *Node = new node();
    node *last = *head;
    Node->next = NULL;
    Node->data = new_data;
    // checking the linked list is empty or not
    if(*head == NULL)
    {
        *head = Node;
    }
    else
    {
        //adding the element at the end.
        while(last->next!= NULL)
        {
            last = last->next;
        }
        last->next = Node;
    }
}
node *dummynode(int key)
{
    node *temp = new node;
    temp->data = key;
    temp->next = NULL;
}
void reverse_linked_list(node **head)
{
    node *prev = NULL, *current = *head, *temp;

    while(current)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    *head = prev;
}
void rearrange(node** head)
{
    node *slow =*head, *fast = slow->next;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *head1 = *head;
    node *head2 = slow->next;
    slow->next = NULL;
// reversing the linked list
     reverse_linked_list(&head2);

// Merging the two linked list
     *head = dummynode(0); //  Assigning dummy node

    node *curr = *head;

while(head1 || head2)
{
    if(head1)
    {
        curr->next = head1;
        curr = curr->next;
        head1 = head1->next;
    }
    if(head2)
    {
        curr->next = head2;
        curr = curr->next;
        head2 = head2->next;
    }
}
*head = (*head)->next;


}
void display(node** head)
{
    node* temp = *head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int n,new_data;
    struct node* head = NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>new_data;
        new_node(&head,new_data);
    } 
    cout<<"The elements of linked list are"<<"\n";
    display(&head);
    rearrange(&head);

}
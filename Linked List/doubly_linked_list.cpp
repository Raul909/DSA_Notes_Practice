/* In a singly Linked List,every Node will have a pointer to the next node.

Advantage of a doubly linked list is that we can access the linked list in either direction.In a doubly linked list,
every node will have a pointer to the next node and a pointer to the previous node.We can access the doubly linked list bidirectionally.

*/

// Structure for a doubly linked list
struct Node
{
    strcut Node *prev;
    int data;
    struct Node *next;
}



//Creating a doubly linked list and assigning value = 10 to it 
struct Node *t
{
    t = new Node();
    t->prev = NULL;
    t->data = 10;
    t->next = NULL;
}
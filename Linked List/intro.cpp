/* 

Why we need Dynamic Data Structures Linked List ?

Problems with Arrays --> Arrays have a fixed size. 

Difference between Arrays and Linked List is that the arrays are stored in contagious memory which have a fixed size (like benches) whereas the linked lists are stored in non-contagious memory which are dynamic in nature i.e. their size can be increased or decreased anytime

Concept of Linked List :- 

So every element will bring its own memory and pointer to the next element. 



About Linked List

1.What is a Linked List? 

Linked List is a collection of nodes where each nodes contain data and pointer to next node 

#head is a pointer pointing to the first node in the linked list

2.What is a Node? 

To define a node we need to define two things data and a pointer to the next node

3.Node Structure 

Node
--------
Data|Next

4.Create a Node


struct Node 
{
    int data;
    struct Node *next;                        //pointer to a node                          #every node consumes 4 bytes 2 for that of int data and 2 for that of struct node *next
};

A structure is having a data as well as pointer of type structure node only.So its having a pointer of its own type so such structure is called as a self-referential structure.

A structure in C++ is the same as that of the class but tue difference is that in class everything by default is private abd in structure everything by default is public.

struct Node *p;

p=(struct Node *)malloc(sizeof(struct Node));      ---> In c
p=new Node;                                        ---> In c++

p->data=10;
p->next=0;




More About Linked List 

struct Node *p.*q;
1.q=p;
2.q=p->next;   (Let q point on next node of p)

3.p=p->next; (Let p point on next node of p)

4.struct Node *p=0; or struct Node *p=NULL;


The three points of checking if a pointer is not pointing anywhere or not on any node 

if(p==NULL)
if(p==0)
if(!p)                                                                0 value-->false and any non zero value id --> true 

if(p->next==NULL)     //to check if the next node is not pointing to another node  
if(p->next!=NULL)     //to check if the next node is pointing to another node 

*/


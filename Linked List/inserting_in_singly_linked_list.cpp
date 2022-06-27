/*

1.Insert before First
2.Insert after given position

*/

1. Node *t = new Node;
t->data = x;
t->next = first;
first = t;

2. pos = 4

    Node *t = new Node;
t->data = x;
p = first;

for (int i = 0; i < pos; i++)
{
    p = p->next;
}
t->next = p->next;
p->next = t;

// Final code combining the two points.

void insert(int pos, int x)
{
    Node *t = new Node;
    Node *p = new Node;
 
    if (pos == 0)                   //Inserting before first Node 
    {
        Node *t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos > 0)                //Inserting after given position 
    {
        p = first;
        for (int i = 0; i < pos; i++)
        {
            p = p->next;
        }
        if (p)
        {
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}

//Creating a Linked List by  Inserting at Last 

void InsertLast(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;
    if(first == NULL)
    {
        first = last = t;
    }
    else{
        last-> next = t;
        last = t;                                           //moving last to t
    }
}



//Inserting in a Sorted Linked List
------------------------------------

Node *p,*q;

p = first;
q=NULL;

while(p && p-> data < x)
{
    q=p;
    p=p->next;
}
Node *t = new Node ;
t->data = x;
t->next = q->next;
q->next = t;




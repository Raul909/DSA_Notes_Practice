/*
1.Inserting before first Node
2.Inserting at any given position

*/

// 1.
Node *t = new Node = ;
t->data = x;
t->prev = NULL;
t->next = first; // t->next = head;
first->prev = t;
first = t;

// 2.
Node *t = new Node;
t->data = x;

for (int i = 0; i < pos - 1; i++)
    p = p->next;

t->next = p->next;
t->prev = p;

if (p->next)
    p->next->prev = t;
p->next = t;

/*

1.Delete from first Node
2.Delete from given Position

*/

// 1.

p = first;
first = first->next;
x = p->data;
delete p;
if (first)
    first->prev = NULL;

// 2.

p = first;
for (int i = 0; i < pos - 1; i++)
    p = p->next;

p->prev->next = p->next;

if (p->next)
    p->next->prev = p->prev;
x = p->data;
delete p;

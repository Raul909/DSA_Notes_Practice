// Scan through the nodes and swap the pointers

p = first;

while (p)
{
    temp = p->next;
    p->next = p->prev;
    p->prev = temp; // swapping the pointers
    // After swapping the pointers it should move on the next node
    p = p->prev;

    if (p->next == NULL)
        first = p;
}
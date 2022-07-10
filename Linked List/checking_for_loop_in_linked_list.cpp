// A linked list will be linear if it is ending with NULL, the last node will be NULL.

// Using Two Pointers to check loop in a Linked List

bool isLoop(Node *first)
{
    Node *p, *q;

    p = q = first;

    do
    {
        p = p->next; // slow pointer
        q = q->next;

        q = (q != NULL) ? q->next : NULL; // fast pointer
    } while (p && q);

    // ternary operator
    return (p == q) ? true : false;
    // if (p == q)
    //     return true;

    // else
    //     return false;
}

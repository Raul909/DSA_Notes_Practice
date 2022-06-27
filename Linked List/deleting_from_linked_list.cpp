/*
1.Delete from first node
2.Delete a Node at any given position

*/

new->allocating memory in heap delete->deallocating memory in heap

    // 1.
    Node *p = first; // pointer p  pointing to the first node
first = first->next; // movement of the head or first pointer to the next node
x = p->data;         // storing the data
delete = p;          // then deallocating the pointer

Time->O(1)

    // Deleting doesn't mean throwing the value it means taking away the value from the linked list

    // Yes,we need an extra pointer for deletion i.e., p with first without that we cannot delete

    // 2. pos = 4 --> deleting the 4th Node

    // Two pointers are required
    // 1. You need a pointer on pos 3 for modifying its link
    // 2. You need a pointer on pos 4 for deallocating it from the memiry

    Node *p = first;
Node *q = NULL;

for (int i = 0; i < pos - 1; i++)
{
    q = p;
    p = p->next;
}

q->next = p->next;
x = p->data;
delete p;

// Time complexity --> O(n)

// Single Function for deleting a Node from a Linked list
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -

int Delete(int pos)
{
    Node *p, *q;
    int x = -1, i;

    if (pos == 1)
    {
        x = first->data;
        p = first;
        first = first->next;
        delete p;
    }
    else
    {
        p = first;
        q = NULL;
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }

        if (p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }
    }
    return x;
}
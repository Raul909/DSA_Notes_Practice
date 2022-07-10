/*
1.Deleting from Head Node
2.Deleting a Node from given Position
*/

// 1.Deleting from Head Node
void Delete(Node *Head)
{
    p = Head;
    while (p->next != Head)
        p = p->next;

    p->next = Head->next;
    x = Head->data;
    delete Head;
    Head = p->next;
}

// 2.Deleting a Node from given Position

void Delete(Node *Head, int pos)
{
    p = Head;

    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    q = p->next;
    p->next = q->next;
    x = q->data;
    delete q;
}

// single function for deleting a node from a circular linked list

int Delete(Node *Head, int pos) // deletes the node and returns the value of the deleted node
{
    Node *p, *q;
    if (pos == 1)
    {
        p = Head;
        while (p->next != Head)
            p = p->next;

        x = Head->data;

        if (p == Head)
        {
            delete Head;
            Head = NULL:
        }
        else
        {
            p->next = Head->next;
            delete Head;
            Head = p->next;
        }
    }
    else
    {
        p = Head;
        for (int i = 0; i < pos - 1; i++)
            p = p->next;

        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }

    return x;
}
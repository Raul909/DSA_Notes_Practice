// Inserting before Head Node
void insert(Node *Head, int x) // x being the value to be inserted
{
    Node *p = head;
    Node *t = new Node;
    t->data = x;
    t->next = head;

    while (p->next != Head)
    {
        p = p->next;
        Head = t; // this will move p till the last node
    }
}

// Inserting between any other position

void insert(Node *Head, int pos, int x) // x being the value to be inserted between
{

    Node *t = new Node;
    Node *p = Head;

    for (int i = 0; i < pos - 1; i++)
        p = p->next;

    t->data = x;
    t->next = p->next;
    p->next = t;
}

// Overall function for inserting an element into a circular linked list

void Insert(int pos, int x, Node *Head)
{
    Node *t, *p;

    int i;

    if (pos == 0)
    {
        t = new Node;
        t->data = x;

        if (Head == NULL)
        {
            Head = t;
            Head->next = Head; // Head will point on itself,Since circular linked list cannot be NULL and have to point on something
        }
        else
        {
            p = Head;
            while (p->next != Head)
                p = p->next;

            p->next = t;
            t->next = Head;
            Head = t;
        }
    }
    else
    {
        p = Head;
        for (int i = 0; i < pos - 1; i++)
            p = p->next;

        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}
/*

1.Reversing Elements
2.Reversing Links

We need to create an auxillary array and reverse for the first option
In Linked List movement of data is avoided so the 2nd option is the best way fot reversig the linked list


*/

// 1.

p = first;
i = 0;

while (p)
{
    A[i] = p->data;
    p = p->next;
    i++;
}

p = first;
i--;

while (p)
{
    p->data = A[i--];
    p = p->next;
}

// here time complexity is O(n) and Space complexity is O(n)

// 2.Revrsing a Linked List by reversing the links(Reversing using sliding pointers)
void reverse(Node *head)
{

    Node *p, *q, *r p = first;
    q = NULL;
    r = NULL;

    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;

    return first;
}

// other syntax of the code above

void reverse(Node *head)
{
    Node *prev, *cur;
    prev = NULL;
    cur = first;

    while (cur)
    {
        Node *temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}


//Recursive Way of Reversing Links 

void Reverse (Node *q,Node *p)
{
    if(p)
    {
        Reverse(p,p->next);
        p->next = q;                                        // at returning time 
    }
    else
    first = q;
}
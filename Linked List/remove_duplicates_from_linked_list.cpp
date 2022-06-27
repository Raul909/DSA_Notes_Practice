Node *p = first;
Node *q = first->next;

while(q)
{
    if(p->data != q->data)
    {
        p=q;
        q=q->next;
    }
    else
    {
        p-> next = q->next;
        delete q;
        q=p->next;
    }
}

// Time Complexity O(n)


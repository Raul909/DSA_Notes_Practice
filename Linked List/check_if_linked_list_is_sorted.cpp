int x = INT_MIN;

Node *p = first;

while(p!=NULL)

{
    if(p->data < x)
    return false;

    else
    x=p->data;
    p=p->data;
}
return true;

// Time Complexity O(n)


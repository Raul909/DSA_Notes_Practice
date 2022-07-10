// Iterative Way

void display(Node *p) // p is pointing on the headnode p = head
{

    do
    {
        cout << p->data;
        p = p->next;
    } while (p != head);
}

int main()
{
    display(head);
}



// Recursive Way

void rdisplay(Node *p)
{
    int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        cout << p->data;
        display(p->next);
    }
}

int main()
{
    rdisplay(head);
}
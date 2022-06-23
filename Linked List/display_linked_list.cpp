

// Display Linked List
-- -- -- -- -- -- -- -- -- -- -- --

 void display(struct Node *p)
{
    while (p != 0) || while (p != NULL) || while (p) // SInce,any non-zero value is true,and zero is false 
    {
            printf("%d", p->data);
        p = p->next; // p points to the next node of p
    }
}
main()
{
    display(first);
}

// Recursive Display of Linked List
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

void display(struct Node *p)
{
    while (p != 0) || while (p != NULL) || while (p) // SInce,any non-zero value is true,and zero is false
        {
            printf("%d", p->data);
            display(p->next);
        }
}
main()
{
    display(first);
}
//             here time complexity is O(n) and that of space complexity is O(n) since recursion uses stack and printing takes constant time.
// stack size = n+1

// output acc to the example is :- 8  3  7  12  9

-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --X-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -X-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
// What happens if the printing of the data in linked list is done recursively at the returning time rather than printing it in calling time let's see

void display(struct Node *p)
{
    while (p != 0)
        || while (p != NULL) || while (p) // Since,any non-zero value is true,and zero is false
        {
            display(p->next);
            printf("%d", p->data);
        }
}
main()
{
    display(first);
}

//but here the output is reversed in order : -9 12 7 3 8
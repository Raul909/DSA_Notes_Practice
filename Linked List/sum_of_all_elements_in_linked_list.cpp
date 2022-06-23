
int Add(Struct Node *p)
{
    int sum=0;
    while(p) 
    {
        sum=sum+p->data;
        p=p->next;                          //This will help to transerve through the linked list 
    }
    return sum;
}               

// T.C -- > O(n)                n--> no. of nodes in linked list


//Recursive Way
--------------

int Add(Struct Node *p)
{
    if(p==0)
    return 0;

    else
    return Add(p->next) + p->data;

}

//T.C--> O(n)
//S.C--> O(n) Since recursion uses Stack


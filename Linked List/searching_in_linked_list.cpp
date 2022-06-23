/* 1. Binary Search :-> We cannot perform this on Linked List since it is difficult to access the middle element of the Linked List without traversing the List 

2. Linear Search 

*/

Node *Search(struct Node *p,int key)
{
    while(p)
    {
        if(p->data == key)
        return (p);
        p=p->next;
    }
    return NULL;
}

//Recursive Way
----------------

Node* Search(struct Node *p,int key)
{
    if(p==NULL) 
    return NULL;
    
    if(p->data == key)
    return p;
   
   return Search(p->next,key);
}


// Improving the Search in the Linked List
-------------------------------------------


/*
1.Transposition
2.Move to Head 

Here in linked list we avoid transposition because we avoid movement of data in Linked List

*/

// 2.

Node * Search(struct Node *p,int key)
{
    Node *q=NULL;
    while(p)
    {
        if(key == p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
        }
        q=p;
        p=p->next;
    }
}

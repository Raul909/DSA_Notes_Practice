//  stop at the node where next is null of the first linked

Node *p =first;

while(p->next)
{
    p = p->next;
}
p->next = second;


second = NULL // removes the second pointer / the head pointer of the second linked list 


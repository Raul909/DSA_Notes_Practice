/*

max=MIN_INT;
max=-32768;

int max(Struct Node *p)
{
  while(p)
  {
      if(p->data>max)
      max=p->data;
      p=p->next;
  }
  return max;
}


Recursive Way
----------------------

int max(Struct Node *p)

{
    if(p==NULL)
    return MIN_INT;

    else
    {
    x= max(p->next);
    if( x > p->data)
       return x;
    else
    return p->data;
    }
}


Other ways of writing the above code 
-------------------------------------

int max(Struct Node *p)

{
    if(p==NULL)
    return MIN_INT;

    else
    {
     x= max(p->next);
     return (x>p->data)?x:p->data;
    }
}

*/
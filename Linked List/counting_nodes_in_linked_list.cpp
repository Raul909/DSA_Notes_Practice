

count = 0;


int count (Struct Node *p)
{
    int c=0;
    while(p)   || while (p!=0)
    {
        c++;
        p=p->next;
    }
    return c;
}



// Recursive Way 

-----------------------

int count (Struct Node *p)
{
    if(p==0)
    return 0;

    else
    {
        return count(p->next)+1;
    }
}


return 1 + count(p->next); --> This cannot be done because we don't know the value of c(210) and so we cannot calculate the value at calling time so it's should be calculated at the returning time.


// Other ways to write the Above Recursive Function 
--------------------------------------------------


//(i)

if(p!=NULL)
return count(p->next) + 1 

else return 0;


//(ii)

int count(struct Node *p)
{
    int x=0;                    // using local variable

    if(p)
    {
        x=count(p->next);
        return x+1;
    }

    else
    return 0;  || return x;
}

*/
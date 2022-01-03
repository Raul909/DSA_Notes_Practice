/* Sum of first 'N' natural numbers using recursion

1+2+3+4+5+6+7
1+2+3+4+............+n


1+2+3+4+............+n = (n(n+1))/2       (using formula)



sum(n) = 1+2+3+4+...............+(n-1)+n

sum(n) = sum(n-1)+n;

         0           ,n=0
sum(n) = 
         sum(n-1)+n  ,n>0

*/


//using recursion 

int sum(int n)
{
    if (n==0)             //recursive function internally uses stack (more space) 
    {
        return 0;
        else              //O(n) --> Time complexity 
        return sum(n-1)+n;
    }
    
}

//using loop

int sum(int n)
{
    int i,s=0;
    for (int i = 0; i < n; i++)              //O(n) --> Time complexity
    {
        s=s+i;
        return s;
    }
}

//using formula 

int sum(int n)
{
    return n*(n+1)/2;             //O(1) --> Time complexity  -->> Takes less time -->>Fastest method
}

//Loop takes less space than recursiob
/*

0   1   1   2   3   5   8   13

      
        0    ,n=0

fib(n)= 1    ,n=1
   
        fib(n-2)+fib(n-1)    ,n>1

        */

//Using recursion

int fib(int n)
{
    if (n<=1)
    return n;
    else
    return fib(n-2)+fib(n-1);
    
}


//Using loops


int fib(int n)
{
    int t0=0,t1=1,s;
    if (n<=1)
    return n;

    for (int i = 2; i <= n ; i++)
    {
       s=t0+t1;
       t0=t1;
       t1=s;
    }
    return s;

}


/* here in the recursion of the above fibonacci has a time complexity of O(2^n) which is slower 

here fib(1),fib(2),fib(3) are called many times


imp note :- So when a function is calling two times by a reduced value of 1 and then minus 1 then the order is O(2^n)  (approx.)


So when a recursive function is calling itsef multiple times for the same values.So such a recursive function is called as excessive recursion 


So there is an approach to avoid all the excessive calls.This approach is known as Memoization.

Memoziation-->>                                                                                                                                    */

int F [10];

int fib(int n)
{

if (n<=1)
{
    F[n]=n;
    return n;
}
else
{
        if (F[n-2]==-1)
        F[n-2]=fib(n-2);

        if (F[n-1]==-1)
        F[n-1]=fib(n-1);

        return F[n-2] + F [n-1];
}

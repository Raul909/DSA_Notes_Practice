#include <iostream>
#include <stdio.h>

void swap(int x, int y)
{
    int t; /* f(x)=3(n^0)
                                               O(1)*/
    t = x;
    x = y;
    y = t;
}
int sum(int A[], int n)
{

    int s = 0;                  //1
    for (int i = 0; i < n; i++) //n+1
    {
        s = s + A[i]; //n
    }
    return s; //1
    -------------
    /*f(n)=2n+3
                                           O(n)*/
}

void add(int n)
{
    for (int i = 0; i < n; i++) //n+1
    {
        for (int j = 0; j < n; j++) //nx(n+1)
        {
            c[i][j] = A[i][j] + B[i][j]; //nxn
            -----------
        } /*f(n)=2(n^2 + 2n +1)
                                             O(n^2) */
    }
}

p = 0;
for (int i = 0; i <= n; i++)
{
    p = p + i;
} /*Assume p>n 
                                      (k(k+1))/2 > 2

                                      k>sq.rt. of n --->> O(sq.root of n) */

for (int i = 0; i <= n; i = i * 2)
{
    stmt;

} /*Assume i>=n
                                         i=2^k
                                         2^k>=n
                                         2^k=n(assume)
                                         k=log (base 2) n   = O(log (base 2) n) */

for (int i = n; i >= 1; i = i / 2)
{
    stmt;
}
/*Assume i<1 
                                        n/2^k < 1
                                        n/2^k = 1 (assume)
                                        n=2^k 
                                        k= log (base 2) n  
                                         = O(log (base 2) n) */

for (int i = 0; i * i < n; i++)
{
    stmt;

} /*Assume i*i<n
                                      i*i>=n
                                     i^2=n
                                    i=sq.root of n
                                    O(sq.root of n)

/* the time complexities of the following loops we learned :-
for(int i=0;i<n;i++)           --------------->>O(n)
for(int i=0;i<n;i+2)           --------->>n/2 ->O(n)
for(int i=n;i>1;i--)           --------------->>O(n)
for(int i=1;i<n;i*2)           --------------->>O(log (base 2) n)
for(int i=1;i<n;i*3)           --------------->>O(log (base 3) n)
for(int i=n;i>1;i=i/2)         --------------->>O(log (base 2) n) 
*/

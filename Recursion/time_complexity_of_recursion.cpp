#include <iostream>
#include <stdio.h>



void fun1(int n)         // -------------------> T(n)
{ 
    if (n > 0)           // -------------------> 1
    {
        printf("%d",n);  // -------------------> 1
        fun1(n-1);       // -------------------> T(n-1)
    }
    
} 


/* T(n)= 1 when n = 0
         T(n-1)+2 when n>0
         




         T(n)=T(n-k)+k -->> the time depends on the number of calls made */
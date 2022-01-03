#include<iostream>
#include<stdio.h>

/* Types of Recursion

1.Tail Recursion
2.Head Recursion
3.Tree Recursion
4.Indirect Recursion
5.Nested Recursion



1.Tail Recursion --> If a recursive function is calling itself and that recursive call is the last statement in the function  */

     void fun(int n)
     {
         if (n>0)
         {
             printf("%d",n);
             fun(n-1);                                       //------------->> recursive call 
         }
         
     }
//This means that all the operations will be performed at calling time and the function will not perform any operation at returning time.That's why tail recursion.

//Tail recursion can be easily converted to loops

void fun(int n)
{
    while (n>0)
    {
        printf("%d",n);
        n--;
    }
    
}

//In case of tail recursion loop is efficient because the space complexity in loop is O(1) and that of recursion is O(n).

//2.Head Recursion -->>
   
   void fun(int n)
     {
         if (n>0)
         {
             fun(n-1);                    //->> recursive call            //returning time           //no operation should be there before function call
             printf("%d",n);
         }
                            //o/p : 1 2 3
     }

//Head recursion can also be easily converted to loops     
void fun(int n)
{
    int i=1;
    while (i<=n)
    {
        printf("%d",i);                            // o/p :  1 2 3
        i++;
    }
    
}



//3.Linear Recursion -->> One Recursion Statement 

//Ex template-->
fun(int n)
{
    if (n>0)
    {
        stmt;
        stmt;
        stmt;
        fun(n-1);
        stmt;
        stmt;
        stmt;
    }
    
}



//4.Tree Recursion -->> If a recursive function is calling itself more than one time 

//Ex template-->

fun(int n)
{
    if (n>0)
    {
        stmt;
        stmt;
        fun(n-1);
        stmt;
        stmt;
        fun(n-1);
        stmt;
        stmt;
        
    }
    
}

//tree recursion ex:

void fun(int n)
{
    if (n>0)
    {
        printf("%d",n);
        fun(n-1);
        fun(n-1);                                   // o/p :    3 2 1 1 2 1 1 
    }
                                                   //Total 15 calls.15 times there is activation records.
}
/*Time - O(2^n)
/Space depends on the maximum height of the stack.Same space is reused in the stack.


5.Indirect Recursion -->> In indirect recursion there may be more than one function and they are calling one another in a circular fashion so that the 
                            first one calls the second one and the second one calls back the first one   */

//Ex template-->

void A(int n)
{
    if (/* condition */)
    {
        stmt;
        stmt;
        B(n-1);
    }
}
void B(int n)
{
    if (/* condition */)
    {
        stmt;
        stmt;
        stmt;
        A(n-3);
    }
    
}


//indirect recursion ex:

void fun_A(int n)
{
    if (n>0)
    {
        printf("%d",n);
        fun_B(n-1);
    }
}
void fun_B(int n)
{
    if (n>1)
    {
        printf("%d",n);
        fun_A(n/2);
    }
}

//Nested Recursion-->A recursive function will pass parameter as a recursive call 

//Ex template-->

void fun(int n)
{
    if (/* condition */)
    {
        stmt;
        stmt;
        fun(fun(n-1));
    }
    
}

//nested recursion ex:

int fun(int n)
{
    if (n>100)
    {
    return n-10;
    else
    return fun(fun(n+11));
    }
    fun(95);              // o/p :  fun(95)=91
}


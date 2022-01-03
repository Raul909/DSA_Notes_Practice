#include<iostream>
#include<stdio.h>


/* Type fun()
{                             If a function is calling itself then it is called a recursive function.
                             
    if (<base condition>)      There has to be a base condition that will terminate recursion       
                                   
    {
        
        1._______________
        2.fun(param);
        3._______________
    }
    
}           */

void fun1(int n)
{
    if (n > 0)
    {
        printf("%d",n);
        fun1(n-1);                         // printing is done at calling time 
    }
    
}

void main()
{
    int x=3;
    fun1(x);
}

void fun2(int n)
{
    if (n>0)
    {
        fun2(n-1);  
        printf("%d",n);                  //printing is done at returning time.Once the call has been terminated the control should go back to the previous call.
    }
    
}

void main()
{
    int x=3;
    fun2(x);
}







void fun(int n)
{
    if (n>0)
    {
      //Ascending               //Calling
      fun(n-1);

      //Descending              //Returning
    } 
}
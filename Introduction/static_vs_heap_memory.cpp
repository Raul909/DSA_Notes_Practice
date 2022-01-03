/* Before the compiler will decide how much memory to allocate the dta type -> This is static memory allocation.

Stack is organized memory 

Heap -> unorganized memory 
-It should be treated as resource (when you require you take the memory when you don't want the memory relesse the memory) */

#include <iostream>
#include <stdio.h>

void main()
{

    int *p;
    p=new int [5];           // this will allocate memory in the heap     //(in C++)   //Program cannot directly access heap memory 

    p =(int*)malloc(2*5);                                                   //(in C)

    delete [] p;           //   -> deallocation

   p=NULL;


}

/*Static array means the sixe of the array is static and dynamic array means the size of the array is dynamic 

void main ()
{
    int A[5]; 
    int n;
    cin>>n;
    int B[n];                                  
}

the size of the array is decided at compilation time,memory will be allocated during runtime only memory cannot be allocated during compilation time.

In C++ we can create an array of any size at runtime whereas in C the size has to be decided at compile time only 

How to Create an array in Heap memory
----->
void main()
{
    int A[5];int *p;
    p=new int [5]; ---> In C++(noy available in C)

    p=(int *)malloc (5*sizeof(int)); --> In C 
}

-->whenever you say new you get the memory from heap 

-->if the unused memory is not released then it causes the memory leak problem 

Delete Memory in Heap-->

In C++ -->  delete [ ] p;

In C --> free(p)

A[0]=5;
p[0]=5;

#malloc function is available in the headerphile <stdlib.h>

*/
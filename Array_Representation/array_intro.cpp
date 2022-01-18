/* An array is a collection of elements of all the elements are of same type.It is stored in contiguous memory. 

scalar -> int x = 10;
vector -> int A[5];

Declaration of Arrays
---------------------

int A[5];                       //declaration only

int A[5] = {2,4,6,8,10};

int A[5] = {2,4};

int A[5] = {0};

int A[]={2,4,6,8,10};

Accessing all the elements of an Array 
--------------------------------------

int A[5] = {2,5,4,9,8};

for(int i=0;i<5;i++)
{
printf("%d",A[i]);
}

printf("%d",*(A+1)); --> prints 5
 */


/* 

1.Reverse 
2.Left Shift
3.Left Rotate
4.Right Shift
5.Right Rotate



1.Reverse 

Using an auxillary array B[]
----------------------------

for(int i = length - 1 , j = 0;i>=0;i--,j++)
{
    B[j]=A[i];                                //reverse copying the elements from A and storing it in the auxillary array
}

for(int i =0 ; i< length;i++)
{
    A[i]=B[i];                               //copying the reverse copied elements from the auxillary array back to array A[]
}



Another method for Reversing 
----------------------------

for(int i=0,j=length-1;i<j;i++,j--)
{
    temp = A[i];
    A[i]=A[j];
    A[j]=temp;
}




Left Shift and Left Rotate 
--------------------------

A[]={6,3,8,5,9} ------>left shift  ----> A[]={3,8,5,9,0}
A[]={6,3,8,5,9} ------>left rotate ----> A[]={3,8,5,9,6}

*/
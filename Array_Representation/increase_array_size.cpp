/* we cannot resize the array but we can create another bigger array and transfer the values to the new array

int *p = new int[5];

int *q = new int[10];
for(i=0;i<5;i++)
q[i]=p[i];
  
delete [] p;-->        /*this will delete the initially allocated memory and p will point to the array below and q which was pointing to the
                         array below will now not point and p wilnow point on the array below 
         
p = q;      -->
q = NULL;   -->                                  

Why the array size cannot be grown? 

Because the memory for the array should be contagious.So after the arrat is over the next contigious memory that is P[4]
 there is no guarantee that the memory is free or not.

 */ 
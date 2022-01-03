/* nCr = n!/r!(n-r)!
   
 
 using factorial recursion we can find out  


 int fact()
 {
     if(n==0)
     return 1;
     else
     return fact(n-1)*n
 }

 int C(int n,int r)
 {
     int t1,t2,t3;
     t1=fact (n);
     t2=fact(r);
     t3=fact(n-r);

     return t1/(t2*t3);
 } 


using pascal's triangle we know that (n-1)Cr-1 + (n-1)Cr = nCr 

we can write a recursion using this formula and avoid the factorial recursion                                                                      */

int C(int n,int r)

{
    if(r == 0 || r == n)
    return 1;
    else
    return C(n-1,r-1) + C(n-1,r);
}

          
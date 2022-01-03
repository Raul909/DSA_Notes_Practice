/*Taylor Series Using Horner's Rule 

e^x = 1 + x/1 + x^2/2 + x^3/3 + x^4/4 + .......................... + n terms

 =1 + x/1 + x^2/2 + x^3/3 + x^4/4    --. here more no. of multiplication operator is involved   --> O(n^2)

 can be written as

 =1+x/1[1+x/2[1+x/3[1+x/4]]]  --> no of multiplication is reduced here                          -->O(n) --> Linear

*/

//Using loops                                                            

int e(int x,int n)
{
    int s=1;
    for (;n>0 ; n--)
    {
        s=1+x/n*s;
    }
    return s;
}



 //Using recursion 
 int e(int x,int n)
 {
     static int s=1;
     if (n==0)
    return s;
else
    s=1+x/n*s;                     //--> calling time
    return e(x,n-1);                    
     
 }
 //Using iterative(using loops)

 double e(int x,int n)
 {
     double s=1,den=1,num=1;

     for (int i = 0; i <= n; i++)
     {
        num*=x;
        den*=i;
        s+=num/den;
     }
     return s;
     
 }
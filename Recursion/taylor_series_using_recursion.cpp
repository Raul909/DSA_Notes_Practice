/*Taylor Series using Recursion

e^x = 1 + x/1 + x^2/2 + x^3/3 + x^4/4 + .......................... + n terms

sum(n-1)+n
fact(n-1)*n
pow(x,n-1)*x

When you have to involve multiple values in a recursion then you can use static variables.

*/

int e(int x,int n)
{
    static int p = 1,f = 1;
    int r;
    if(n==0)
    return(1);
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
     return r + p/f;
  }
}


//This method has a quadratic time complexity O(n^2).
/*

2^5 = 2*2*2*2*2

m^n=m*m*m*m*m*.................. for n times

pow(m,n)=m*m*m*m*m*.................(n-1)times * m

pow(m,n) = pow(m,n-1)*m

         
          1    ,n=0
pow(m,n)=
          pow(m,n-1)   n>0

          */


//Using recursion


int pow(int m,int n)
{
    if(n==0)
    return (1);
 else
    return m*pow(m,(n-1))*m;
    
}


int pow(int m,int n)
{
    if(n==0)
    return (1);
    if (n%2==0)
    return pow(m*m,n/2);
 else
    return m*pow(m*m,(n-1)/2);
    
}
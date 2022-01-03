
/*
fact(n) = 1*2*3*....................*(n-1)*n

fact(n) = fact(n-1)*n


         1  ,n=0
fact(n)=
         fact(n-1)*n  n>0 
         */

        int fact (int n)
        {
            if (n==0)
                return 1;
             else 
                return fact(n-1)*n;
            
            
        }
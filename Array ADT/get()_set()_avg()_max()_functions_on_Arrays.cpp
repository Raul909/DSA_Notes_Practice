/* 

1.Get(index)
2.Set(index,x)
3.Max()
4.Min()
5.Sum()
6.Avg()


1.Get(index)

if(index>=0 && index<length)           //condition for valid index
  return A[index];




2.Set(index,x)

if(index>=0 && index<length)
        A[index]=x;  



3.Max()

max=A[0];

for(int i = 1 ;i < length;i++)
{
    if(A[i]>max)
    max=A[i];
}
return max;                                                         --> O(n)





4.Min()

max=A[0];

for(int i = 1 ;i < length;i++)
{
    if(A[i]<min)
    min=A[i];
}
return min;                                                         --> O(n)




5.Sum()

Iterative 
---------
Total = 0 ; 

for(int i = 0 ; i < length;i++)
{
    Total = Total + A[i];
}
return Total ; 



Recursive 
---------

int Sum(A,n)
{
    if(n<0)
    return 0;
    else 
    return Sum(A,n-1) + A[n];
}



6.Avg()

Total = 0;

for(int i =0;i<length ; i++)
{
    Total=Total + A[i];
}
return Total/n;


*/
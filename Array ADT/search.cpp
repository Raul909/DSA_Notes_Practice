/*

Search
------

1.Linear Search

2.Binary Search


1.Linear Search :- In Linear Search we check the elements one by one linearly in the array. 
 
 for(int i=0;i<length;i++)
 {
     if(key==A[i])
     return i;
 }
 return -1;

 Best  --> O(1)
 Worst --> O(n)
 Avg   --> O(n)



 Improving Linear Search
 -----------------------

 1.Transposition
 ---------------

 You can have a key element which is repeatedly searched one step forward.This method is called as Transposition.

 for(int i = 0;i<Length;i++)
 {
     if(key==A[i])
     {
         swap(A[i],A[i-1])
         return i-1;
     }
 }

 2.Move to Front/Head
 --------------------

 for(int i = 0;i<Length;i++)
 {
     if(key==A[i])
     {
         swap(A[i],A[0])
         return 0;
     }
 }


 Binary Search 
 -------------

 Iterative / Loop Version 
 ------------------------
 Algorith BinSearch (l,h,key)
 {
     while(l<=h)
     {
         mid=[(l+h)/2];
         if(key==A[mid])
         return mid;
         else if(key < A[mid])
         h=mid-1;
         else 
         l=mid + 1;
     }
     return -1;
 }


Recursive Version
-----------------
Algorithm RBinSrch(l,h,key)
{
    if(l<=h)
    {
        mid=[(L+h)/2];
        if(key==A[mid])
        return mid;
        else if(key < A[mid])
        return RBinSrch(l,mid-1,key);
        else
        return RBinSrch(mid+1,h,key);
    }
    return -1;
}


Best  --> O(1)
Worst --> O(n)
Avg   --> O(n)

*/

#include <stdio.h>

using namespace std;

/* Tower of Hanoi 

For 1 disk

TOH(1,A,B,C)
Move disk from A to C using B                                       //here A is source,B is auxillary or intermediate tower,C is destination





For 2 disks

TOH(2,A,B,C)
1.TOH(1,A,C,B)
2.Move Disk from A to C using B
3.TOH(1,B,A,C) 



For 3 disks

TOH(3,A,B,C)
1.TOH(2,A,C,B)
2.Move disk from A to C using B 
3.TOH(2,B,A,C)

*/


void TOH(int n,int A,int B,int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        printf("Move disk from %d to %d ",A,C);
        TOH(n-1,B,A,C);
    }
}



/* Let's trace for 3 disks the path for the disks to move from tower A to tower B with moving one disk at a time 

 the path will be if we take the values of A = 1 , B = 2 , C = 3

 (1,3)->(1,2)->(3,2)->(1,3)->(2,1)->(2,3)->(1,3)


 Time complexity -> O(2^n)
 */





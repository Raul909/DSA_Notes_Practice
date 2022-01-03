#include <iostream>
#include <stdio.h>

int fun(int n)
{
    static int x = 0;
    if (n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
    
}
int main()
{
    int a = 5;
    printf("%d",fun(a));
    return 0;
}
/*


for static variables the output:-

fun(0)=0
fun(0) + 5 = 5
fun(1) + 5 = 10
fun(2) + 5 = 15
fun(3) + 5 = 20
fun(4) + 5 = 25

Static and global variables are created in the code section of the main memory

*/
int fun(int n)
{
    if (n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
    
}
int main()
{
    int a = 5;
    printf("%d",fun(a));
    return 0;
}

/* 

for local variables the output:-

fun(0)=0
fun(0) + 1 = 1
fun(1) + 2 = 3
fun(2) + 3 = 6
fun(3) + 4 = 10
fun(4) + 5 = 15

they are created in the following function section in the stack memory

*/


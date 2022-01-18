/*

int A[m][n]
Methods for representation of 2D array in a single dimensional array 

1.Row-major mapping 
2.Column-major mapping


Row-major mapping
-----------------

In row-major mapping elements of 2D arrays are stored row by row in the single dimensional array 

Formula for row-major mapping

Address(A[i][j])= l_0 + [i*n+j]*w                                         where,l_0 = base address,i = rows,j = columns,w=size of datatype array,n is no of columns







Column-major mapping
--------------------

Formula for column-major mapping
 
Address(A[i][j])= l_0 + [j*m+i]*w                                            where,l_0 = base address,i = rows,j = columns,w=size of datatype array,m is no of rows

#C/C++ follows row-major mapping formula though both row and column-major mapping formula are equally efficient and takes the same amount of time to








Formula for 4D arrays 
-----------------------

Row-major mapping
-----------------

Address(A[i1][i2][i4][i5]) = l_0 + [ i1 * d2*d3*d4 + i2 * d3 * d4 + i3 * d4 + i4]*w

Column-major mapping
-----------------

Address(A[i1][i2][i4][i5]) = l_0 + [ i4 * d1*d2*d3 + i3 * d1 * d2 + i2 * d1 + i1]*w

Using horner's rule we can reduce the no . of multiplication required



Row-major mapping --> Addr(A[i1][i2][i3][i4]) = l_0 + i4 + d4 * [i3 + d3 * (i2 + i1*d2)]             this reduces the time complexity from O(n2) to O(n)



*/
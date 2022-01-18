/*

int A[3][5]= {{1,2,3,4},{2,4,6,8},{3,5,7,9}}

Memory allocation of 2D arrays will be linear and



Array pointers--> 

int *A[3];

A[0]=new int [4];
A[1]=new int [4];
A[2]=new int [4];



Double pointers (Everything will be in heap)

itn **A;
A=new int*[3];

A[0]=new int [4];
A[1]=new int [4];
A[2]=new int [4];

Accessing 2D Arrays     ---->

for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 3; j++)
    {
        A[i][j]=(some value x that you want to access from the 2D array)
    }
}


*/
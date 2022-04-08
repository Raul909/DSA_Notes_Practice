/*

Abstract data type means representation of data and the set of operating on the data.

Representation of the data (Array) is done by the compiler itself.Now the operations on the data is not given by the compiler we are supposed to implement
the operations and provide the operations on array data structures.

Data                                                           Operations
----                                                          ----------
1.Array Space                                                 1.Display
2.Size                                                        2.Add(x)/Append(x)
3.Length                                                      3.Insert(index,x)
                                                              4.Delete(index)
                                                              5.Search(x)
                                                              6.Get(index)
                                                              7.Set(index,x)
                                                              8.Max()/Min()
                                                              9.Reverse()
                                                              10.Shift()/Rotate()

1.Display()

for(int i=0;i<array.length;i++)
{
    print(arr[i]);
}



2.Add(x)/Append(x)      --> Adding a new element at the end of the array i.e. at the next free space in an array

A[Length]=x;

Length++:                                 --> O(n)




3.Insert(index,x)         --> Inserting an element in a given index

Insert(4,15)

for(int i=Length;i>index;i--)
{
    A[i] = A[i-1];
    }
A[index]=x;                                    --> O(1) is minimum
Length++;                                      --> O(n) is maximum



4.Delete(index)    --> removing an element from a given index

x=A[index];

for(int i = index;i<Length-1;i++)
{
    A[i]=A[i+1];
}
Length--;

*/
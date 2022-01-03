/*
Geek created a random series and given a name geek-onacci series. Given four integers A, B, C, N. A, B, C represents the first three numbers of geek-onacci series. Find the Nth number of the series. The nth number of geek-onacci series is a sum of the last three numbers (summation of N-1th, N-2th, and N-3th geek-onacci numbers)

Input:
1. The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
2. The first line of each test case contains four space-separated integers A, B, C, and N.

Output: For each test case, print Nth geek-onacci number

Constraints:
1. 1 <= T <= 3
2. 1 <= A, B, C <= 100
3. 4 <= N <= 10

Example:
Input:
3
1 3 2 4
1 3 2 5
1 3 2 6

Output:
6
11
19

*/

#include <bits/stdc++.h>

using namespace std;

int fib(int A, int B, int C, int n)
{

    if (n == 3)
        return C;
    else if (n == 2)
        return B;
    else if (n == 1)
        return A;

    else
    {
        return fib(A, B, C, n - 3) + fib(A, B, C, n - 2) + fib(A, B, C, n - 1);
    }
}
int main()
{

    int T;
    cin >> T;
    int arr[T][4];
    int ser[T];
    for (int i = 1; i <= T; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        int d = arr[i][0];
        int e = arr[i][1];
        int f = arr[i][2];
        int g = arr[i][3];

        ser[i] = fib(d, e, f, g);
    }
    for (int i = 1; i <= T; i++)
    {
        cout << ser[i] << "\n";
    }

    return 0;
}

//other method -->

#include <iostream>
using namespace std;

int fib(int a, int b, int c, int n)
{
    int d, fibnum;
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;
    for (int i = 4; i <= n; i++)
    {
        d = a + b + c;
        fibnum = d;
        int t1, t2, t3;
        t2 = b;
        t3 = c;
        a = t2;
        b = t3;
        c = fibnum;
    }
    return fibnum;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        cout << fib(a, b, c, n) << "\n";
    }
    return 0;
}

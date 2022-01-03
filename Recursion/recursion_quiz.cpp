//Q1
int fun(int n)
{
    static int i = 1;
    if (n >= 5)
        return n;
    n = n + i;
    i++;
    return fun(n);
}
/* f(1) --> ?

f(1)=7 */

//Q2
void foo(int n, int sum)
{
    int k = 0, j = 0;
    if (n == 0)
        return;
    k = n % 10;
    j = n / 10;
    sum = sum + k;
    foo(j, sum);
    printf("%d", k);
}
int main()
{
    int a = 2048, sum = 0;
    foo(a, sum)
        printf("%d", sum);
}

//o/p --> 20480          // since the sum is zero here and change in formal parameter will not affect the actual parameter the output will be this
// with the help of this code we can find the sum of digits of a number recursively but we need to modify the main function.

//Q3
int f(int &x, int c)
{
    c = c - 1;
    if (c == 0)
        return 1;
    x = x + 1;
    return f(x, c) * x;
}
int main()
{
    int p = 5;
    printf("%d", f(p, p));
}

//o/p --> 9^4

//Q4
int fun(int n)
{
    int x = 1, k;
    if (n == 1)
        return x;
    for (k = 0; k < n; ++k)
        ;
    {
        x = x + fun(k) * fun(n - k);
    }
    return x;
}

//find fun(5).

//ans --> 51

//Q5
void count(int n)
{
    static int d = 1;
    printf("%d", n);
    printf("%d", d);
    d++;
    if (n > 1)
        count(n - 1);
    printf("%d", d);
}

/*Find count(3) -->?

Ans -->    3 1 2 2 1 3 4 4 4

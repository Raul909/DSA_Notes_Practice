/* Applications of Stacks

Paranthesis Matching

((a + b) * ( c- d))

 */

// Program for Paranthesis Matching

#include <bits/stdc++.h>

using namespace std;

struct Stack
{
    int Top;
    int size;
    char *s;
};

void push(struct Stack *st, char x)
{
    if (st->Top == st->size - 1)
        cout << "Stack overflow"<< "\n";
    else
    {
        st->Top++;
        st->s[st->Top] = x;
    }
}

void pop(struct Stack *st)
{
    if (st->Top == -1)
        cout << "Stack underflow"<< "\n";

    else
        st->Top--;
}

int isEmpty(Stack st)
{
    if (st.Top == -1)
        return 1;
    else
        return 0;
}

bool isBalance(char *exp)
{
    struct Stack st;

    st.size = strlen(exp);
    st.Top = -1;

    st.s = new char[st.size]; // Array of character is created

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(&st, exp[i]);

        else if (exp[i] == ')')
        {
            if (isEmpty(st))
                return false;
            pop(&st);
        }
    }

    return isEmpty(st) ? true : false;
}

int main()
{
    // struct Stack st;
    char exp[] = "((a+b)*(c-d))";
    bool ans = isBalance(exp);

    cout << ans;
    return 0;
}

// Insertion and deletion in stack is done from onr end only unlike queue which has two pointers and two sides

struct stack
{
    int size;
    int Top;
    int *s;
};

int main()
{
    struck stack st;
    cout << "Enter size of the stack"<< "\n";
    cin >> st.size();
    st.s = new int[st.size];
    st.Top = -1;
}

// Empty stack condition
if (Top == -1)

    // Full stack condition
    if (Top == st.size - 1)

        // Pushing a value to the stack

        void push(stack *st, int x)
        {
            if (st->Top == st->size - 1)
                cout << "Stack overflow"<< "\n";
            else
            {
                st->Top++;
                st->s[st->Top] = x; // Time complexity --> O(1)
            }
        }


        

// Popping/Deleting a value from the stack
----------------------------------------------
int pop(stack *st)
{
    int x == -1;
    if (st->Top == -1)
        cout << "Stack underflow"<< "\n";

    else
    {
        x = st->s[st->Top]; // Time complexity --> O(1)
        st->Top--;
    }
    return x;
}



// Finding an Element at a Given Position in the Stack(Peek)
---------------------------------------------------------------
int peek(stack st, int pos)
{
    int x = -1;
    if (Top - pos + 1 < 0)
        cout << "Invalid Position"
             << "\n";
    else
        x = st.s[st.Top - pos + 1]; // Time complexity --> O(1)
    return x;
}




// Finding the topmost value of the stack(StackTop)
----------------------------------------------------
int stackTop(stack st)
{
    if (st.Top == 1)
        retur - 1;

    else
        return st.s[st.Top]; // Time complexity --> O(1)
}



// Checking whether the Stack is empty or not
------------------------------------------------
int isEmpty(stack st)
{
    if (st.Top == -1)
        return 1;

    else
        return 0; // Time complexity --> O(1)
}




// Checking whether the Stack is full or not
---------------------------------------------
int isFull(stack st)
{
    if (st.Top == st.size - 1)
        return 1;

    else
        return 0; // Time complexity --> O(1)
}

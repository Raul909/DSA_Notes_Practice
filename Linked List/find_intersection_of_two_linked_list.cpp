/* We cannot traverse from back.But How is it possible to traverse from back.It is possible using stack

When you cannot travel backwards in a singly linked list,stack will help you.


Two stacks filled with addressed of the two linked list

Time complexity :- O(n + n + n) ~ O(3n)  ~~ O(n)
*/

p = first;

while (p != NULL)
    push(&Stk1, p);

p = second;
while (p != NULL)
    push(&Stk2, p);

while (stackTop(stk1) == stackTop(stk2))
{
    p = pop(&stk1);
    pop(&stk2); // pointer p will have the last node deleted from the stack
}

cout << p->data;

// So,p is the intersection node of the two linked lists


//C++ soln 
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        stack <ListNode*> stk1;
        stack <ListNode*> stk2;


         ListNode* p;
        p = headA;

        while(p) {
            stk1.push(p);
            p = p -> next;
        }


        p = headB;

        while(p) {
            stk2.push(p);
            p = p -> next;
        }


        // a1 a2 c1 c2 c3
        // b1 b2 b3 c1 c2 c3



        while(stk1.size() != 0 && stk2.size() != 0 && stk1.top() == stk2.top()) {
            p = stk1.top();
            stk1.pop();
            stk2.pop();

        }

                return p;

    }

    //O(n) --> both time and space complexity
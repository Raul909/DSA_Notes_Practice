
// Merging is the process of combining two sorted list into a single sorted linked list


//list1 being the head of the first sorted list and list2 being the head of the second sorted list
Node *third, *last;

if (list1 == NULL && list2 == NULL)
{
    third = last = NULL;
}

if (list1 == NULL)
    return list2;

if (list2 == NULL)
    return list1;

else
{
    if (list1->val < list2->val)
    {
        third = last = list1;
        list1 = list1->next;
        last->next = NULL;
    }
    else
    {
        third = last = list2;
        list2 = list2->next;
        last->next = NULL;
    }
}
while (list1 && list2)
{
    if (list1->val < list2->val)
    {
        last->next = list1;
        last = list1;
        list1 = list1->next;
        last->next = NULL;
    }
    else
    {

        last->next = list2;
        last = list2;
        list2 = list2->next;
        last->next = NULL;
    }
}
if (list1)                                // if there are any remaining elements in the first list it will add them to the new pointer 
    last->next = list1;

if (list2)                                // if there are any remaining elements in the second list it will add them to the new pointer
    last->next = list2;      

return third;


//Merging is suitable for Linked List because it does not need any extra space.In the case of arrays we need extra space for merging (we need an auxillary array)
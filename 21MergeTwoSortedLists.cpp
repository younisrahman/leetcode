#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int value)
    {
        val = value;
        next = NULL;
    }
};
void insertInHead(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val);
    n->next = head;
    head = n;
}
void insertInEnd(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val);
    ListNode *temp = head;
    if (head == NULL)
    {
        insertInHead(head, val);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAfterValue(ListNode *&head, int val, int place)
{
    ListNode *n = new ListNode(val);
    ListNode *temp = head;
    while (temp->next != NULL && place != temp->val)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void insertAfterPosition(ListNode *&head, int val, int place)
{
    ListNode *n = new ListNode(val);
    ListNode *temp = head;
    int count = 0;
    while (temp->next != NULL && place != count)
    {
        temp = temp->next;
        count++;
    }
    n->next = temp->next;
    temp->next = n;
}
void display(ListNode *&head)
{
    if (head == NULL)
        cout << "NULL" << endl;
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " --> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}
void deleteHead(ListNode *&head)
{
    ListNode *toDelete = head;
    head = head->next;
    delete toDelete;
}
void deleteTail(ListNode *&head)
{

    ListNode *temp = head;
    int count = 0;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    ListNode *toDelete = temp->next->next;
    temp->next = NULL;
    delete toDelete;
}
void deleteValue(ListNode *&head, int val)
{
    ListNode *temp = head;
    while (temp != NULL && temp->next->val != val)
    {
        temp = temp->next;
    }
    ListNode *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
void length(ListNode *&head)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << "Length of Linked List is " << count << endl;
}
void search(ListNode *&head, int val)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            cout << " The Value found in " << count << " location" << endl;
            return;
        }
        temp = temp->next;
        count++;
    }
    cout << "Not found" << endl;
}
ListNode *mergeLists(ListNode *&head1, ListNode *&head2)
{
    ListNode *p1 = head1;
    ListNode *p2 = head2;
    ListNode *dummyListNode = new ListNode(-1);
    ListNode *p3 = dummyListNode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->val > p2->val)
        {
            p3->next = p2;
            p2 = p2->next;
        }
        else
        {
            p3->next = p1;
            p1 = p1->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyListNode->next;
}

ListNode *mergeListsRecursion(ListNode *&head1, ListNode *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    ListNode *result;
    if (head1->val < head2->val)
    {
        result = head1;
        result->next = mergeListsRecursion(head1->next, head2->next);
    }
    else
    {
        result = head1;
        result->next = mergeListsRecursion(head1->next, head2);
    }
    return result;
}
int getListNodeValue(ListNode *llist, int positionFromTail)
{
    ListNode *temp = llist;
    ListNode *temp2 = llist;

    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    int position = count - positionFromTail;
    int count2 = 1;
    while (temp2 != NULL && count2 != position)
    {
        cout << temp2->val << endl;
        temp2 = temp2->next;
        count2++;
    }
    // return position;
    return temp2->val;
}
void deleteNode(ListNode *node)
{
    ListNode *next = node->next;
    *node = *next;
    delete next;
}
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *dummyLinkedList = new ListNode(-1);
    ListNode *p3 = dummyLinkedList;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val > list2->val)
        {
            p3->next = list2;
            list2 = list2->next;
        }
        else
        {
            p3->next = list1;
            list1 = list1->next;
        }
        p3 = p3->next;
    }
    while (list1 != NULL)
    {
        p3->next = list1;
        p3 = p3->next;
        list1 = list1->next;
    }
    while (list2 != NULL)
    {
        p3->next = list2;
        p3 = p3->next;
        list2 = list2->next;
    }

    return dummyLinkedList->next;
}
int main()
{
    ListNode *head = NULL;
    insertInEnd(head, 1);
    insertInEnd(head, 4);
    insertInEnd(head, 5);
    insertInEnd(head, 9);
    display(head);

    ListNode *head2 = NULL;
    insertInEnd(head2, 2);
    insertInEnd(head2, 5);
    insertInEnd(head2, 8);
    insertInEnd(head2, 10);
    display(head2);

    ListNode *head3 = mergeTwoLists(head, head2);
    display(head3);

    return 0;
}
#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
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
    while (temp->next != NULL && place != temp->data)
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
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
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
    while (temp != NULL && temp->next->data != val)
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
        if (temp->data == val)
        {
            cout << " The Value found in " << count << " location" << endl;
            return;
        }
        temp = temp->next;
        count++;
    }
    cout << "Not found" << endl;
}
ListNode *middleNode(ListNode *head)
{
    ListNode *middle = head;
    ListNode *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        middle = middle->next;
        temp = temp->next->next;
    }
    return middle;
}
int main()
{
    ListNode *head = new ListNode(1);
    insertInEnd(head, 2);
    insertInEnd(head, 3);
    insertInEnd(head, 4);
    insertInEnd(head, 5);
    insertInEnd(head, 6);

    ListNode *middle = middleNode(head);

    display(middle);

    return 0;
}
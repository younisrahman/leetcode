#include <bits/stdc++.h>
#define ll long long int
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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
void display(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " --> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int carry = 0;
    int l3;
    ListNode *head3 = NULL;
    while (l1 != NULL || l2 != NULL)
    {
        int val = 0;
        if (l1)
        {
            val += l1->val;
        }
        if (l2)
        {
            val += l2->val;
        }
        val += carry;
        carry = 0;
        if (val > 9)
        {
            carry += 1;
            val -= 10;
        }
        insertInEnd(head3, val);

        if (l1)
        {
            l1 = l1->next;
        }
        if (l2)
        {
            l2 = l2->next;
        }
    }
    if (carry > 0)
    {
        insertInEnd(head3, carry);
    }
    return head3;
}
int main()
{
    FastIO;

    ListNode *head = NULL;
    insertInEnd(head, 9);
    insertInEnd(head, 9);
    insertInEnd(head, 9);
    insertInEnd(head, 9);
    insertInEnd(head, 9);
    insertInEnd(head, 9);
    insertInEnd(head, 9);
    ListNode *head2 = NULL;
    insertInEnd(head2, 9);
    insertInEnd(head2, 9);
    insertInEnd(head2, 9);
    insertInEnd(head2, 9);
    ListNode *head3 = addTwoNumbers(head, head2);
    display(head3);

    return 0;
}
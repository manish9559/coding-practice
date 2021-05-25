#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *insertInList(node *head, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = head;
    head = temp;
    return head;
}
node *head;
void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void reverseListByRecursion(node *p)
{

    if (p->next == NULL)
    {
        head = p;
        return;
    }
    reverseListByRecursion(p->next);
    node *q = p->next;
    q->next = p;
    p->next = NULL;
}
int main()
{
    head = NULL;
    head = insertInList(head, 4);
    head = insertInList(head, 9);
    head = insertInList(head, 6);
    head = insertInList(head, 3);
    head = insertInList(head, 7);
    printList(head);
    reverseListByRecursion(head);
    cout << "\n";
    printList(head);
    return 0;
}
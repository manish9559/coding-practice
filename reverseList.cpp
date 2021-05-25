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
void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
// node *reverseListByIteration(node *head)
// {
//     node *current = new node();
//     node *prev = new node();
//     node *nextNode = new node();
//     prev = NULL;
//     current = head;

//     while (current != NULL)
//     {
//         /* code */
//         nextNode = current->next;
//         current->next = prev;
//         prev = current;
//         current = nextNode;
//     }
//     head = prev;
//     return head;
// }
void reverseListByRecursion(node *p)
{
    node *temp = p;
    if (p->next == NULL)
    {
        temp = p;
        return;
    }
    reverseListByRecursion(p->next);
    node *q = p->next;
    q->next = p;
    p->next = NULL;
}
int main()
{
    node *head = NULL;
    head = insertInList(head, 4);
    head = insertInList(head, 9);
    head = insertInList(head, 6);
    head = insertInList(head, 3);
    head = insertInList(head, 7);
    printList(head);
    //head = reverseListByIteration(head);
    reverseListByRecursion(head);
    cout << "\n";
    printList(head);
    return 0;
}
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void forwardPrintintList(node *p)
{
    if (p == NULL)
        return;
    cout << p->data << " ";
    forwardPrintintList(p->next);
}
void reversePrintingList(node *p)
{
    if (p == NULL)
        return;
    reversePrintingList(p->next);
    cout << p->data << " ";
}
node *insertInList(node *head, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *temp1 = new node();
        temp1 = head;
        while (temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}

int main()
{
    node *head = new node();
    head = NULL;
    head = insertInList(head, 5);
    head = insertInList(head, 6);
    head = insertInList(head, 8);
    head = insertInList(head, 9);
    forwardPrintintList(head);
    cout << "\nReverse Print Of the LinkedList"
         << "\n";
    reversePrintingList(head);
    return 0;
}

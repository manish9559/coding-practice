#include <iostream>
using namespace std;
struct node
{
    /* data */
    int data;
    node *next;
};
/* Insertion At the beginning of the linkedList */
node *insertAtbegining(node *head, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = head;
    head = temp;
    return head;
}
/* Insertion At the End of the linkedList */
void insertAtEnd(node **head, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    node *last = new node();
    last = *head;
    if (*head == NULL)
    {
        *head = temp;
        return;
    }
    while (last->next != NULL)
    {
        /* code */
        last = last->next;
    }
    last->next = temp;
}
void insertAtpos(node **head, int prev, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    node *pos = new node();
    pos = *head;
    while (pos->data != prev)
    {
        /* code */
        pos = pos->next;
    }
    temp->next = pos->next;
    pos->next = temp;
}
void printList(node *head)
{
    while (head != NULL)
    {
        /* code */
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = new node();
    head = NULL;
    // head = insertAtbegining(head, 5);
    // head = insertAtbegining(head, 4);
    // head = insertAtbegining(head, 9);
    // head = insertAtbegining(head, 12);
    // head = insertAtbegining(head, 10);
    // head = insertAtbegining(head, 45);
    insertAtEnd(&head, 5);
    insertAtEnd(&head, 23);
    insertAtEnd(&head, 12);
    insertAtEnd(&head, 56);
    insertAtEnd(&head, 9);
    printList(head);
    insertAtpos(&head, 12, 90);
    cout << "\n";
    printList(head);
    return 0;
}
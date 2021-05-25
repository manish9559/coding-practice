#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insertAtHead(node **head, int val)
{
    node *n = new node();
    n->data = val;
    if (*head == NULL)
    {
        n->next = n;
        *head = n;
        return;
    }
    node *temp = *head;

    while (temp->next != *head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = *head;
    *head = n;
}

void insertAtTail(node **head, int val)
{

    if (*head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node();
    n->data = val;
    node *temp = *head;

    while (temp->next != *head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = *head;
}
void deleteAtLast(node **head)
{
    node *current = *head;
    node *temp = *head;
    while (current->next != *head)
    {
        temp = current;
        current = current->next;
    }
    temp->next = current->next;
    free(current);
}
void deleteAtFirst(node **head)
{
    node *temp = *head;
    node *current = *head;
    while (current->next != *head)
    {
        current = current->next;
    }
    *head = temp->next;
    current->next = temp->next;
    free(temp);
}
void printList(node *head)
{
    node *current = head;
    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
}
int main()
{
    node *head = new node();
    head = NULL;
    insertAtTail(&head, 6);
    insertAtTail(&head, 9);
    insertAtTail(&head, 3);
    insertAtTail(&head, 8);
    insertAtTail(&head, 4);
    insertAtHead(&head, 5);
    printList(head);
    deleteAtLast(&head);
    cout << "\nList after deleting the last node: \n";
    printList(head);
    deleteAtFirst(&head);
    cout << "\nList after deleting the first node: \n";
    printList(head);
    return 0;
}
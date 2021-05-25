#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
void insertAtStart(node **head, int val)
{
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (*head == NULL)
    {
        *head = temp;
        return;
    }
    (*head)->prev = temp;
    temp->next = (*head);
    *head = temp;
}
void insertAtEnd(node **head, int val)
{
    node *newnode = new node();
    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = NULL;
    node *last = *head;
    if (*head == NULL)
    {
        /* code */
        *head = newnode;
        return;
    }

    while (last->next != NULL)
    {
        /* code */
        last = last->next;
    }
    newnode->prev = last;
    last->next = newnode;
}
void insertAtPosition(node **head, int val, int pos)
{
    node *newnode = new node();
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;
    node *prevNode = *head;
    if (pos == 1)
    {
        (*head)->prev = newnode;
        newnode->next = *head;
        *head = newnode;
        return;
    }
    for (int i = 0; i < pos - 2; i++)
    {
        /* code */
        prevNode = prevNode->next;
    }
    node *posNode = prevNode->next;
    posNode->prev = newnode;
    newnode->next = posNode;
    prevNode->next = newnode;
    newnode->prev = prevNode;
}
void deleteAtHead(node **head)
{
    node *temp = new node();
    temp = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);
}
void deleteAtEnd(node **head)
{
    node *tail = new node();
    tail = *head;
    while (tail->next != NULL)
    {
        /* code */
        tail = tail->next;
    }
    node *temp = tail->prev;
    temp->next = NULL;
    free(tail);
}
void deleteAtPosition(node **head, int pos)
{
    node *temp = new node();
    temp = *head;
    if (*head == NULL)
    {
        cout << "List is empty."
             << "\n";
    }
    if (pos == 1)
    {
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
    for (int i = 0; i < pos - 2; i++)
    {
        /* code */
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        node *tail = temp->prev;
        tail->next = NULL;
        free(temp);
    }
    node *posNode = temp->next;
    node *temp1 = posNode->next;
    temp->next = temp1;
    temp1->prev = temp;
    free(posNode);
}
void printList(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    node *head = new node();
    head = NULL;
    // insertAtStart(&head, 5);
    // insertAtStart(&head, 9);
    // insertAtStart(&head, 8);
    // insertAtStart(&head, 2);
    // insertAtStart(&head, 3);
    // printList(head);
    cout << "Inserting element at the end of the linked list: \n";
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 12);
    insertAtEnd(&head, 78);
    insertAtEnd(&head, 90);
    insertAtEnd(&head, 23);
    printList(head);
    cout << "Inserting element at a given position of the linked list: \n";
    insertAtPosition(&head, 1000, 3);
    insertAtPosition(&head, 200, 1);
    insertAtPosition(&head, 500, 2);
    printList(head);
    cout << "Linked List after deleting the head node: \n";
    deleteAtHead(&head);
    printList(head);
    cout << "Linked List after deleting the last node: \n";
    deleteAtEnd(&head);
    printList(head);
    cout << "Linked List after deleting the Nth node: \n";
    deleteAtPosition(&head, 6);

    printList(head);
    return 0;
}
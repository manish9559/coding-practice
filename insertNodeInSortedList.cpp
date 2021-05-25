#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insertNodeInSort(node **head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    node *current = *head;
    node *temp = new node();
    while (current != NULL && (current->data < newNode->data))
    {
        /* code */
        temp = current;
        current = current->next;
    }
    newNode->next = current;
    temp->next = newNode;
}
void printNode(node *head)
{
    node *temp = new node();
    temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = NULL;
    insertNodeInSort(&head, 5);
    insertNodeInSort(&head, 1);
    insertNodeInSort(&head, 9);
    insertNodeInSort(&head, 3);
    insertNodeInSort(&head, 4);
    insertNodeInSort(&head, 2);
    printNode(head);
    return 0;
}
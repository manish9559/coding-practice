#include <iostream>
using namespace std;
struct node
{
    /* data */
    int data;
    node *next;
};
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
void nthNode(node **head, int n)
{
    node *temp = *head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (count < n)
        return;
    node *current = *head;
    for (int i = 0; i < count - n; i++)
    {
        current = current->next;
    }
    cout << current->data;
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
//Efficient Approach
void printNthFromLast(node **head, int n)
{
    node *mainNode = *head;
    node *refNode = *head;
    int count = 0;
    if (head != NULL)
    {
        while (count < n)
        {
            if (refNode == NULL)
            {
                printf("%d is greater than the no. of "
                       "nodes in list",
                       n);
                return;
            }
            refNode = refNode->next;
            count++;
        }
        if (refNode == NULL)
        {
            *head = (*head)->next;
            if (*head != NULL)
                cout << "Node no. " << n << " from last is " << mainNode->data;
        }
        else
        {
            while (refNode != NULL)
            {
                /* code */
                mainNode = mainNode->next;
                refNode = refNode->next;
            }
            cout << "Node no. " << n << " from last is " << mainNode->data;
        }
    }
}
int main()
{
    node *head = new node();
    head = NULL;
    insertAtEnd(&head, 35);
    insertAtEnd(&head, 15);
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 20);

    printList(head);
    cout << "\n";
    cout << "Enter the nth node: ";
    int n;
    cin >> n;
    printNthFromLast(&head, n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
//This is insertion at linked list in the beginning.
node *insertAtBegin(node *head, int x)
{
    node *temp = new node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}
void insertToPosition(node *head, int prev_Node, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    while (head->data != prev_Node)
    {
        head = head->next;
    }
    temp->next = head->next;
    head->next = temp;
}
void insertToEnd(node *head, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    while (head->next != NULL)
    {
        /* code */
        head = head->next;
    }
    head->next = temp;
}
void printList(node *head)
{
    cout << "The final LinkedList is : " << endl;
    while (head != NULL)
    {
        /* code */
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *head = NULL;
    int numOfItems, x;
    cout << " Enter the number of item in the linkedList : ";
    cin >> numOfItems;
    for (int i = 0; i < numOfItems; i++)
    {
        /* code */
        cout << "Enter the number: ";
        cin >> x;
        head = insertAtBegin(head, x);
    }
    printList(head);
    cout << "\nInsertion at a given position: ";
    int val;
    int prev_Node;
    cin >> val >> prev_Node;
    insertToPosition(head, prev_Node, val);
    printList(head);
    cout << "\nInsertion at the end: " << endl;
    int val2;
    cout << "Enter the value to be inserted: ";
    cin >> val2;
    insertToEnd(head, val2);
    printList(head);
    return 0;
}
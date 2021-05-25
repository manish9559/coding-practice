#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
void insertInList(int val)
{
    node *temp = new node();
    temp->data = val;
    temp->next = NULL;
    node *last = new node();
    last = head;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (last->next != NULL)
    {
        /* code */
        last = last->next;
    }
    last->next = temp;
    return;
}
void deleteFromList(int n)
{
    node *temp = new node();
    temp = head;
    if (n == 1)
    {
        /* code */
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; i < n - 2; i++)
    {
        /* code */
        temp = temp->next;
    }
    node *temp1 = new node();
    temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
}
void printList()
{
    node *temp = new node();
    temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{

    head = NULL;
    insertInList(4);
    insertInList(12);
    insertInList(5);
    insertInList(34);
    insertInList(7);
    printList();
    cout << "Enter the position to be deleted: ";
    int pos;
    cin >> pos;
    deleteFromList(pos);
    printList();
    return 0;
}
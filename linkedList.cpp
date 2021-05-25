#include <bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data;
    node *next;
};
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
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    head = new node();
    second = new node();
    third = new node();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    printList(head);
    return 0;
}
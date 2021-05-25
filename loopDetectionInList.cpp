#include <bits/stdc++.h>
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
//This method is by using the hashing.
// bool detectLoop(node *head)
// {
//     unordered_set<node *> s;
//     while (head != NULL)
//     {
//         if (s.find(head) != s.end())
//         {
//             return true;
//         }
//         s.insert(head);
//         head = head->next;
//     }
//     return false;
// }
//floyd's cycle detection method. Make two pointer slow and fast. move slow by one and fast by two.
void floydLoopDetection(node *head)
{
    node *slowPointer = head;
    node *fastPointer = head;
    int loopExist = 0;
    while (slowPointer && fastPointer && fastPointer->next)
    {
        slowPointer = slowPointer->next;
        fastPointer = fastPointer->next->next;
        if (slowPointer == fastPointer)
        {
            loopExist = 1;
            break;
        }
    }
    if (loopExist)
    {
        slowPointer = head;
        while (slowPointer != fastPointer)
        {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next;
        }
        fastPointer = slowPointer;
        slowPointer = slowPointer->next;
        int count = 1;
        while (slowPointer != fastPointer)
        {
            slowPointer = slowPointer->next;
            count++;
        }
        cout << "length of the loop: " << count << endl;
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
    head->next->next->next->next = head->next;
    floydLoopDetection(head);
    return 0;
}
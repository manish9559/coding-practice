#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    /* data */
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            /* code */
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
            return false;
    }
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop(int val)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        else
        {
            int popVal = arr[top];
            arr[top] = 0;
            top--;
            return popVal;
        }
    }
    int count()
    {
        return top + 1;
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack UnderFlow" << endl;
            return 0;
        }
        else
            return arr[pos];
    }
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "Stack value is changed at " << pos << endl;
    }
    void display()
    {
        for (int i = 4; i >= 0; i--)
        {
            /* code */
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    Stack s1;
    int pos, option, val;
    do
    {
        /* code */
        cout << "Choose the operation which you want to perform? select 0 for exit " << endl;
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. peek()" << endl;
        cout << "6. count()" << endl;
        cout << "7. change()" << endl;
        cout << "8. display()" << endl;
        cout << "9. clear screen" << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Enter the value to insert in the stack: " << endl;
            cin >> val;
            s1.push(val);
            break;
        case 2:
            s1.pop(val);
            break;
        case 8:
            cout << "elements of the stack are: " << endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            break;
        }
    } while (option != 0);
    return 0;
}
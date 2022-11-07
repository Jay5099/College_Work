/*
2. Write a program to implement the stack functions (PUSH and POP) using the Queue
functions (INSERT and DELETE). Input initial queue followed by set of stack
operations,
Display Queue after each stack operation.
Test your program with given Queue as input and perform various Stack Operations
input:
Queue : 3: 4 : 8: 10
Input : POP
Queue status : 4:8:10
Input : PUSH 15
Queue status : 15:4:8:10
Input: POP
Queue status :4:8:10
*/

#include <iostream>
using namespace std;

struct node
{
    int document;
    node *next;
};

void push(node **end_node, int new_document)
{
    node *new_node = new node();
    new_node->document = new_document;
    (*end_node)->next = new_node;
    (*end_node) = new_node;
}

void pop(node *start_node, node **end_node)
{
    node *cur = start_node;
    while ((cur->next) != *end_node)
    {
        cur = cur->next;
    }
    *end_node = cur;
}

void display(node *start_node, node *end_node)
{
    node *cur = start_node;
    while (cur != end_node)
    {
        cout << cur->document << "\n";
        cur = cur->next;
    }
    cout << cur->document << "\n";
}

int main()
{

    node *start = new node();
    cout << "enter the value to be inserted : ";
    cin >> start->document;
    start->next = NULL;
    node *end = start;
    while (1)
    {
        int choice;
        cout << "\nenter your choice\n1.push\n2.pop\n3.display\n4.exit\n:->";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int new_document;
            cout << "\nenter the data to be inserted : \n";
            cin >> new_document;
            push(&end, new_document);
            cout << "your value has been added to queue\n";
            break;
        }
        case 2:
        {
            pop(start, &end);
        }
        case 3:
        {
            cout << "\n";
            cout << "\nthis values are currently in queue:->\n";
            display(start, end);
            break;
        }
        case 4:
        {
            goto exit;
        }
        }
    }
exit:;

    return 0;
}

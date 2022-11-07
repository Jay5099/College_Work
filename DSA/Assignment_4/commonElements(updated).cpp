/*1. There are two linked lists A and B containing the following data:

A: 3, 7,10,15,16,9,22,17,32

B: 16,2,9,13,47,8,10,1,28

WAP to create a linked list C that contains only those elements that are common  in linked
list A and B and also create a linked list D which contains all elements of  A as well as
B ensuring that there is no repetition of elements..*/

#include <iostream>
using namespace std;

struct node
{
    int value;
    node *next;
};

node *join(node *headA, node *headB)
{
    node *cur = headA;
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = headB->next;
    return headA;
}

void display(node *start_node)
{
    node *cur = start_node;
    cur = cur->next;
    while (cur != NULL)
    {
        cout << cur->value << "  ";
        cur = cur->next;
    }
    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    node *headA = new node();
    node *headB = new node();
    // cout << "hello" << endl;
    // cout << "enter the values :\n";
    node *cur = headA;
    for (int i = 0; i < 9; i++)
    {
        node *temp = new node();
        temp->next = NULL;
        // cout<<"enter "<<i<<"th: "<<endl;
        cin >> temp->value;
        cur->next = temp;
        cur = temp;
    }

    cur = headB;
    for (int i = 0; i < 9; i++)
    {
        node *temp = new node();
        temp->next = NULL;
        // cout<<"enter "<<i<<"th: "<<endl;
        cin >> temp->value;
        cur->next = temp;
        cur = temp;
    }
    node *startC = new node();
    node *curA = headA;
    node *curB = headB;
    node *curC = startC;
    while (curA->next != NULL)
    {
        // cout << "hello " << curA->value << endl;
        while (curB->next != NULL)
        {
            // cout << curB->value << " " << curA->value << endl;
            if (curA->next->value == curB->next->value)
            {
                // cout << "hello";
                // cout << curC << " " << startC << endl;
                node *temp = new node();
                temp->value = curA->next->value;
                curC->next = temp;
                curC = temp;
                curB->next = curB->next->next;
                break;
            }
            else
            {

                curB = curB->next;
            }
        }
        curA = curA->next;
        // cout << curB << " here " << headB << endl;
        curB = headB;
        // cout << curC << " " << startC << endl;
    }
    node *startD = new node();
    startD = join(headA, headB);
    display(startC);
    display(startD);
}
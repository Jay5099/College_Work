/*1. There are two linked lists A and B containing the following data:

A: 3, 7,10,15,16,9,22,17,32

B: 16,2,9,13,47,8,10,1,28

WAP to create a linked list C that contains only those elements that are common  in linked list A and B and
also create a linked list D which contains all elements of  A as well as B ensuring that there is no repetition of elements..*/

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
	cur->next = headB;
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

node *sort(node *head)
{
	node *cur = head;
	while (cur != NULL && cur->next != NULL)
	{
		node *start = head;
		if (cur->next->value > cur->value)
		{
			cur = cur->next;
		}
		else
		{
			node *temp = cur->next;
			cur->next = temp->next;
			while (start->next->value < temp->value)
			{
				start = start->next;
			}
			temp->next = start->next;
			start->next = temp;
			// break;
		}
	}
	return head;
}

int main()
{
	node *headA = new node();
	node *headB = new node();
	cout << "Start input A:" << endl;
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
	cout << "Start input B:" << endl;
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
	headA = sort(headA);
	headB = sort(headB);
	node *curA = headA;
	node *curB = headB;
	node *curC = startC;
	while (curA->next != NULL && curB->next != NULL)
	{
		if (curA->next->value > curB->next->value)
		{
			curB = curB->next;
		}
		else if (curA->next->value < curB->next->value)
		{
			curA = curA->next;
		}
		else
		{
			node *temp = curA->next;
			curA->next = curA->next->next;
			curB->next = curB->next->next;
			curC->next = temp;
			curC = temp;
		}
	}
	node *startD = join(headA, headB);
	display(startC);
	display(startD);
}

/*
2. Split a linked list into two lists where each list contains
 alternate elements from it  Given a linked list of integers, 
 lit it into two lists containing alternating elements  from 
 the original list. 

For example, if the original list is {1, 2, 3, 4, 5}, then
 one sublist should be {1, 3, 5}  and the other should be 
 {2, 4}. The elements in the output lists may be in any 
 order.  i.e., the sublists can be {5, 3, 1} and {4, 2} for 
 input list {1, 2, 3, 4, 5}. 
*/
#include<iostream>
using namespace std;

struct node
{
    int value;
    node *next;
};

void display(node *start_node)
{
    node *cur = start_node;
    while (cur != NULL)
    {
        cout << cur->value << "  ";
        cur = cur->next;
    }
    cout<<"\n";
}

int main()
{
    node *head = new node();
    int n;
    cout<<"enter no. of element : ";
    cin>>n;
    node *cur=head;
    cin>>head->value;
    for(int i=0;i<n-1;i++){
    	node *temp= new node();
    	temp->next=NULL;
    	cin>>temp->value;
    	cur->next=temp;
    	cur=temp;
    }
    node *odd=head;
    node *even=head->next;
    node *currentOdd=odd;
    node *currentEven=even;

    while(currentOdd->next!=NULL && currentEven->next!=NULL){
    	currentOdd->next=currentEven->next;
    	currentOdd=currentEven->next;
    	currentEven->next=currentOdd->next;
    	currentEven=currentOdd->next;
    }
    if(currentOdd==NULL) currentEven->next=NULL;
    else currentOdd->next=NULL;
    display(odd);
    display(even);
}
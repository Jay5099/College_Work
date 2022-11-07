#include<iostream>
using namespace std;
struct node {
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL;
void create(int A[], int n)
{
    struct node *last;
    struct node *t=new node;
    t->data=A[0];
    head=last=t;
    head->prev=NULL;
    head->next=NULL;
    for(int i=1; i<n; i++)
    {
        struct node *t=new node;
        t->data=A[i];
        last->next=t;
        t->prev=last;
        t->next=NULL;
        last=t;

    }
}
void Display(struct node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    } while (p!=NULL);
    
}
void reverse(struct node *p)
{
    struct node *temp;
    while (p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
    

    if(p!=NULL && p->next==NULL)
    {
        head=p;
    }
    }
}

int main()
{
    int A[9]={1,2,3,4,5,6,7,8,9};
    create(A,9);
    reverse(head);
    Display(head);
    return 0;
}
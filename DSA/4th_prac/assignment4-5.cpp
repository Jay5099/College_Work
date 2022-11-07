#include <iostream>
using namespace std;
struct node
{
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
void Insert(struct node *p, int pos, int val)
{
if(pos==1)
     {
        struct node *t=new node;
        t->data=val;
        t->next=head;
        head->prev=t;
        t->prev=NULL;
        head=t;
     }
     else 
     {
    for(int i=1; i<pos; i++)
    {
        p=p->next;
    }

        struct node *t=new node;
        t->data=val;
        p->prev->next=t;
        t->prev=p->prev;
        t->next=p;
        if(p->next)
        {
        p->prev=t;
        }
        // t->next=NULL;
     }
    
}

void Delete(struct node *p,int pos)
{
       struct node *q;
       if(pos==1)
       {
        p=head;
        head=head->next;
        head->prev=NULL;
        delete p;
        p=head;
       }

       else{
        for (int i=1; i<pos; i++)
        {
            q=p;
            p=p->next;

        }
       
            q->next=p->next;
            if(p->next)
            {
            p->next->prev=q;
       }
            delete p;
            q=p;
       }
}
int main()
{
    int A[9]={1,2,3,4,5,6,7,8,9};
    create(A,9);
    Insert(head,9,10);
    Delete(head,9);
    Display(head);
    return 0;
}
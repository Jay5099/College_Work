#include <iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*A=NULL,*B=NULL,*C=NULL, *D=NULL; 
void createA( int a[],int n)
{
     struct node *t ,*last;
    t=(struct node *)malloc(sizeof(struct node));
     t->data=a[0];
    A=t;
    t->next=NULL;
    last=A;
    for(int i=1 ; i<n; i++)
    {
        struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=a[i];
    last->next=t;
    last=t;
    t->next=NULL;

    }

}
void createB( int b[],int n)
{
     struct node *t ,*last;
    t=(struct node *)malloc(sizeof(struct node));
     t->data=b[0];
    B=t;
    t->next=NULL;
    last=B;
    for(int i=1 ; i<n; i++)
    {
        struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=b[i];
    last->next=t;
    last=t;
    t->next=NULL;

    }
}

void  mergesort(struct node *p, struct node *q)

{
    struct node *t=new node;
    t=NULL;
    struct node *last;
    if(p->data<q->data)
    {
        if(C==NULL)
        {
            t->data=p->data;
        C=t=last;
        t->next=NULL;

        }
        else{
            t->data=p->data;
            last->next=t;
            last=t;
             t->next=NULL;
        }
        p=p->next;
        last->next=NULL;

    }

    else{

        if(C==NULL)
        {
            t->data=q->data;
        C=t=last;

        }
        else{
            t->data=q->data;
            last->next=t;
            last=t;
        }
         t->next=NULL;
        q=q->next;
        last->next=NULL;
        // C=q=last;
        // q=q->next;
        // last->next=NULL;
    }

    while(p!=NULL && q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;

        }
        else 
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }

    
if(p)
{
    last->next=p;
}
if(q)
{
    last->next=q;
}

//   return c;

}

void Display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int main()
{
// printf("hello");
    int a[4]={1,3,5,7};
    int b[4]={2,4,6,8};
    createA(a,4);
    createB(b,4);
    
    mergesort(A,B);
    Display(C);



    return 0;
}
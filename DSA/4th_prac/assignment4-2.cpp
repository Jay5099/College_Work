#include <iostream>
using namespace std;
struct node 
{
    int data;
    struct node *next;

}*p=NULL;
void create( int a[],int n)
{
     struct node *t ,*last;
    t=(struct node *)malloc(sizeof(struct node));
     t->data=a[0];
    p=t;
    t->next=NULL;
    last=p;
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


void spilt(struct node *p)
{
    struct node *r=p;

    struct node *dummy,*last;
    // dummy=(struct node *)malloc(sizeof(struct node));
    dummy=NULL;
    // dummy->data=r->data;
    // dummy->next=NULL;
    // last=dummy;

    while(r!=NULL)
    {
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(dummy==NULL)
        {
            temp->data=r->data;
            dummy=last=temp;
            temp->next=NULL;
        }
        else
        {
        temp->data=r->data;
        last->next=temp;
        temp->next=NULL;
        last=temp;
        }
        r=r->next;
    }
    r=p;

    printf("First part of link list \n");
    while(r!=NULL )
    {
       printf("%d ",r->data);
       if(r->next==NULL)
       {
        break;
       }
       r=r->next->next;
    }
    // r=NULL;
    
    printf("\n");

    struct node *temp=dummy->next;
    printf("second part of link list \n");
     while(temp !=NULL )
    {
        printf("%d ",temp->data);

       
        temp=temp->next->next;
    
    }
   
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
    int A[]={1,2,3,4,5,6};
    create(A,6);
    spilt(p);
    // Display(p);

    return 0;
}













                                //
                                // here we made a dummy linked list  , one list use for 1 part of link and dummy link list is use for another linked list 

                                // Important!- cheak the condition inside the loop....
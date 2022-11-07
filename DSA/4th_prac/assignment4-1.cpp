#include <iostream>
#include <stdlib.h>
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

node* intersection(struct node *m, struct node *n)
{

    // if(count(m)>=count(n))
    // {

    // }

    while(m!=NULL)
    {
        while(n!=NULL)
        {

            if(m->data==n->data)
            {
               struct node *last;
               if(C==NULL)
               {
                 struct node *t ;
                t=(struct node *)malloc(sizeof(struct node));
                t->data=m->data;
                C=last=t;
                t->next=NULL;

               }
               else{
                struct node *t ;
                t=(struct node *)malloc(sizeof(struct node));
                 t->data=m->data;
                last->next=t;
                last=t;
                t->next=NULL;
               }
            
            }
            n=n->next;
        }
        n=B;
        m=m->next;
    }

    return C;

    
}

node* Union(struct node *m, struct node *n)
{


    // while(m->next!=NULL)
    // {
    //     m=m->next;
    // }
    // m->next=n;

        struct node *last;
      while(m!=NULL)
    {
         if(D==NULL)
            {
                 struct node *t ;
                t=(struct node *)malloc(sizeof(struct node));
                t->data=m->data;
                D=last=t;
                t->next=NULL;

            }
            else{
                 struct node *t ;
                t=(struct node *)malloc(sizeof(struct node));
                t->data=m->data;
                last->next=t;
                t->next=NULL;
                last=t;
            }

            m=m->next;
    }

    struct node *s;
        struct  node *f;
       f=n;
       while(f!=NULL)
       {
            s=D;
        while(s!=NULL)
        {
            if(f->data==s->data)
            {
                break;
            }
            s=s->next;
        }

        if(s==NULL)
        {
            struct node *temp=(struct node *)malloc(sizeof(struct node));
            temp->data=f->data;
            temp->next=NULL;
            last->next=temp;
            last=temp;
        }
        
        f=f->next;
       }
    

    
    return D;

  
}

void Display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}
int count(struct node *p)
{
    int counting=0;
    while(p!=NULL)
    {
        p=p->next;
        counting++;
    }
    return counting;
}
int main()
{
    int a[1]={1};
    int b[8]={5,6,8,54,0,3,2,4};
    createA(a,1);
    createB(b,8);
    // Union(A,B);
    // intersection(A,B);
    C=intersection(A,B);
//    Display(intersection(A,B));
    D=Union(A,B);
    Display(C);
    return 0;
}












//          Here in intersection , we simply take two loop and cheaking the elememt 
// of one link list in another list , time complexibilty=n square......//
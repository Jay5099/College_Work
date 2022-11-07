// make 3 linked list ,,,,..list 1 , list 2,,, resultant list.....
// cheak condition whose head node power data is greater .........
// run a loop while list 1 , list 2 == Null ,,,,,,,
//  cheak whose head node power data is greater ... add 0 to it made is resultant until(goto next position only one link list ) whose power data is equal to another list data (now both linked list move simultaneoulsy until both become null )
// write a print statement like polynimial function ............GD Night.......

#include<iostream>
using namespace std;
struct node {
    int coeff;
    int pow;
    struct node *next;
}*first=NULL,*second=NULL, *result=NULL;
void insert(struct node *p, int pow, int coeff)
{
    struct node *last;
    if(p ==NULL)
    {
        struct node *t=new node;
        t->pow=pow;
        t->coeff=coeff;
        first=last=t;
        last->next=NULL;
        last=t;
    }
    else
    {
        struct node *t=new node;
        t->pow=pow;
        t->coeff=coeff;
        last->next=t;
        t->next=NULL;
        last=t;
    }
}

node *arithemeticexp(struct node *p, struct node *q)
{
    
    struct node *last;
    while(p && q)
    {
           
        if(p->pow>q->pow)
        {
            struct node *t=new node;
            
            if(t==NULL)
            {   t=last;
                t->pow=p->pow;
                t->coeff=p->coeff+q->coeff;
                t->next=NULL;
            }
            else 
            {
                t->pow=p->pow;
                t->coeff=p->coeff+q->coeff;
                last->next=t;
                last->next=NULL;
                last=t;
            }
            p=p->next;
        }
        else if(q->pow>p->pow)
        {
            q=q->next;
        }
        else if(p->pow == q->pow)
        {
             struct node *t=new node;
             t=NULL;
            if(t==NULL)
            {   t=last;
                t->pow=p->pow;
                t->coeff=p->coeff+q->coeff;
                t->next=NULL;
            }
            else 
            {
                t->pow=p->pow;
                t->coeff=p->coeff+q->coeff;
                last->next=t;
                last->next=NULL;
                last=t;
            }
        }
    }
}
int main()
{
    cout<<"Enter the power and coeffcient of linked list 1"<<endl;
    int p; //power
    int c;  // coefficient
    int i=0;
    while(i<3)
    {
    cin>>p>>c;
    insert(first,p,c);
    }
    cout<<"Enter the power and coeffcient of linked list 2"<<endl;
    // int p; //power
    // int c;  // coefficient
    int j=0;
    while(j<3)
    {
    cin>>p>>c;
    insert(second,p,c);
    }




    return 0;
}
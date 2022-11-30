

#include<iostream>

using namespace std;

class node{
public:
    int data;
    node *next;
};

void printlist(struct node*);
 node* create(node*head,int A[],int n){
    node*last=NULL;
    head=new node;
    head->data=A[0];
    head->next=NULL;
    last=head;
for(int i=1;i<n;i++){


   node*temp=NULL;
   temp =new node;
   temp->data=A[i];
   temp->next=NULL;
   last->next=temp;
   last=temp;
}
return head;
}

node* Selection_list(node*head){
    node*third=NULL;
    node*p=head;
    node*q=NULL;
    node*r=NULL;

    while(p){ 
        q=p;
        r=p;
        q=q->next;
        while(q){
        if(q->data<r->data){
            r->next=q->next;
            q->next=r;
            q=q->next;
            r=r->next;
        }
        else if(q->data==r->data){
            node*t=NULL;
            r->next=q->next;
            q=t;
            q=q->next;
            delete (t);
        }
        else{
            q=q->next;
            r=r->next;
        }
        }
        p=p->next;
    }
    third=head;
    printlist(third);
    return third;
}

node*Intersection(node*p,node*q){
    node*ans=NULL;
    node*last=NULL;
    node*temp=NULL;

    while(p){
        while(q){
            if(p->data==q->data){
                if(p==NULL){
                ans=new node();
                ans->data=p->data;
                ans->next=NULL;
                last=ans;
            }
            
            else{
                temp=new node();
                temp->data=q->data;
                temp->next=NULL;
                last->next=temp;
                last=temp;
            }
            }
        }
    }
    return ans;
}

void printlist(struct node *p){
      if(p==NULL){
        cout<<"NONE\n";
      }
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        }
      cout<<"\n";
}


int main(){
    int A[8]{12, 6, -5, 7, 7, 9, 9, 10},B[6]{2, 4, 7, 7, 12, -5};

    node*first=NULL;
    node*second=NULL;
    node*third=NULL;

    first=create(first,A,8);
    second=create(second,B,6);
    printlist(first);
    printlist(second);


    first=Selection_list(first);
    second=Selection_list(second);
    printlist(first);
    printlist(second);

    third=Selection_list(second);
    third=Intersection(first,second);
    printlist(third);
}


            
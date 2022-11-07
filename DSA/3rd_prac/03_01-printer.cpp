/*1. When sending a document to a printer, it may have to be held until the printer
finishes whatever job it is working on. Holding a job until a printer is free is generally
the responsibility of a print spooler (a program that manages the input to a printer).
Print spoolers hold jobs in a data structure until the printer is free. This provides fair
access to the printer and guarantees that no print job will be held forever. (Check
underflow and overflow condition for printer job)*/

#include <iostream>
using namespace std;

struct node{
    int document;
    node* next;
};

void push(node** end_node, int new_document)
{
    node* new_node = new node();
    new_node->document = new_document;
    new_node->next = NULL;
    (*end_node)->next = new_node;
    (*end_node)=new_node;
}

void display(node*start_node){
    node *cur=start_node;
    while(cur!=NULL){
        cout<<cur->document<<"\n";
        cur=cur->next;
    }
}

int main() {
    
    node* start= new node();
    cout<<"enter the data to be printed : ";
    cin>>start->document;
    start->next=NULL;
    node* end=start;
    while(1){
        int choice;
        cout<<"\nenter your choice\n1.push\n2.display\n3.print\n4.exit\n:->";
        cin>>choice;
        switch(choice){
            case 1:{
                int new_document;
                cout<<"\nenter the data to be printed : \n";
                cin>>new_document;
                cout<<"\n";
                push(&end,new_document);
                cout<<"\n";
                cout<<"your document has been added to queue\n";
                break;
            }
            case 2:{
                cout<<"\n";
                cout<<"\nthis documents are currently in queue, please wait...\n";
                display(start);
                break;
            }
            case 3:{
                cout<<start->document;
                cout<<"next document is being printed";
                start=start->next;
                break;
            }
            case 4:{
                goto exit;
            }
        }
    }
    exit:;

    return 0;
}

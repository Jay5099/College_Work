#include<iostream>
using namespace std;

template<typename T>
struct Node{
    T data;
    Node<T>* next;
};

template<typename T>
class LinkedList{
  public:
  Node<T>* head;
  Node<T>* nil;
  
  LinkedList(){
      this->nil=NULL;
      this->head=this->nil;
  }
  bool isEmpty(){
    if(this->head==this->nil) return true;
    return false;
  }

  Node<T>* search(T val){
      Node<T>* temp=this->head;
      while(temp!=this->nil ){
          if(temp->data==val) return temp;
          temp=temp->next;
      }
      return this->nil;
  }
  // insert after given node
  void insertAtNode(Node<T>* node,T key){
      if(node==this->nil){
          this->push_back(key);
      }
      else{
          Node<T>*temp=new Node<T>();
          temp->data=key;
          temp->next=node->next->next;
          node->next=temp;
      }
  }
  // back insert only
  void push_back(T key){
      Node<T>* node=new Node<T>();
      node->data=key;
      node->next=this->nil;
      if(this->head==this->nil) {
        this->head=node;
        return;
      }
      Node<T>* temp=this->head;
      while(temp->next!=this->nil){
          temp=temp->next;
      }
      temp->next=node;
  }
  // front pop only
  void deleteAtNode(Node<T>*node){
    Node<T>* temp=this->head;
    while(temp!=this->nil || temp->next==node)temp=temp->next;
    temp->next=temp->next->next;
  }
  
  void displayList(){
      Node<T>* temp=this->head; 
      cout<<"elements: " ;
      while(temp!=this->nil){
          cout<<temp->data<<" --> ";
          temp=temp->next;
      }
      cout<<endl;
  }

    void my_union(LinkedList<T>& l1,LinkedList<T>& l2){
        Node<T>* head1=l1.head;
        while(head1!=l1.nil){
            int val=head1->data;
            if(this->search(val)!=this->nil) this->push_back(val);
            head1=head1->next;
        }
        head1=l2.head;
        while(head1!=l1.nil){
            int val=head1->data;
            if(this->search(val)!=this->nil) this->push_back(val);
            head1=head1->next;
        }
    } 
    void common(LinkedList<T>& l1,LinkedList<T>& l2){
        Node<T>* head1=l1.head;
        while(head1!=l1.nil){
            int val=head1->data;
            if(l2.search(val)!=l2.nil) this->push_back(val);
            head1=head1->next;
        }
    }
};
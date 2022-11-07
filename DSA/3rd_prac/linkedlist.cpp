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
  
  LinkedList(T data){
      this->nil=NULL;
      this->head=new Node<T>();
      this->head->data=data;
      this->head->next=this->nil;
  }
  // back insert only
  void push_back(T key){
    //   if(this->head==this->nil){
    //       this->head->data=key;
    //       this->head->next=this->nil;
    //   }
      Node<T>* temp=this->head;
      while(temp->next!=this->nil){
          temp=temp->next;
      }
      Node<T>* node=new Node<T>();
      node->data=key;
      node->next=this->nil;
      temp->next=node;
  }
  // front pop only
  T printNext(){
      if(this->head!=this->nil){
        cout<<this->head->data<<" task has been completed\n";
        if(this->head->next!=this->nil) this->head=this->head->next;
      }
      else cout<<"UNDERFLOW";
  }
  
  void displayList(){
      Node<T>* temp=this->head;  
      while(temp!=this->nil){
          cout<<temp->data<<" --> ";
          temp=temp->next;
      }
  }
};

void menu(){
    cout<<"---------------\n";
    cout<<"0--exit\n1--push\n2--printNext\n3--display stack\n\n";
    cout<<"---------------\n";
    cout<<"Enter :\n";
}

int main(){
    int n;
    LinkedList<int> ll(10);
    // ll.displayList();
    int code;
    menu();
    while(true){
        cin>>code;
        switch(code){
            case 0:{
                return 0;
            }
            case 1:{
                cout<<"Enter the data to be printed:\n";
                int val;
                cin>>val;
                ll.push_back(val);
                break;
            }
            
            case 2:{
                ll.printNext();
                break;
            }
            
            case 3:{
                ll.displayList();
                break;
            }
            
            default:{
                cout<<"Enter valid code\n";
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
}

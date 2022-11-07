#include<iostream>

using namespace std;
template<typename T>
struct Node{
    T data;
    Node<T>* next;
};
// Queue implementation using linked list as inner container
template<typename T>
class Queue{
  public:
  Node<T>* head;
  Node<T>* nil;
  
  Queue(){
      this->nil=NULL;
      this->head=this->nil;
  }
  bool isEmpty(){
    if(this->head==this->nil) return true;
    return false;
  }

  // back insert only
  void push(T key){
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
  pair<T,bool> pop(){
      if(this->head!=this->nil){
        // cout<<this->head->data<<" task has been completed\n";
        T val=this->head->data;
        this->head=this->head->next;
        return make_pair<val,true>
      }
      return make_pair(NULL,false);
  }
  
  void displayQueue(){
      Node<T>* temp=this->head; 
      cout<<"Queued elements:\n" ;
      while(temp!=this->nil){
          cout<<temp->data<<" --> ";
          temp=temp->next;
      }
  }
};

void menu(){
    cout<<"---------------\n";
    cout<<"0--exit\n1--push\n2--pop\n3--display Queue\n\n";
    cout<<"---------------\n";
    cout<<"Enter :";
}

int main(){
    int n;
    Queue<int> q;
    int code;
    while(true){
        menu();
        cin>>code;
        switch(code){
            case 0:{
                return 0;
            }
            case 1:{
                cout<<"Enter the data to be printed:";
                int val;
                cin>>val;
                q.push(val);
                break;
            }
            
            case 2:{
                pair<int,bool> p=q.pop();
                if(p.first) cout<<p.second<<"th task has been comlpeted ";
                else cout<<"UNDERFLOW ERROR";
                break;
            }
            
            case 3:{
                q.displayQueue();
                break;
            }
            
            default:{
                cout<<"Enter valid code";
            }
        }        
        cout<<"\n";
    }
    
}

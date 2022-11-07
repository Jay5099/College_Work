#include<iostream>
#include "linkedlist.h"
using namespace std;
#define mp make_pair
#define F first
#define S second
#define ll long long int

ll power(ll b,ll e){
    ll res=1;
    while(e){
        if(e&1) res=res*b;
        b=b*b;
        e>>=1;
    }
    return res;
}

template<typename T>
class AugLinkedList:public LinkedList<T>{
    // returns the search for a given power in linkedList
    public:
        void displayList(){
            Node<T>* temp=this->head; 
            cout<<"Expression: " ;
            while(temp!=this->nil){
                cout<<temp->data.S<<"x^"<<temp->data.F<<" + ";
                temp=temp->next;
            }
            cout<<endl;
        }

        ll solve(int x){
            Node<T>* temp=this->head;
            ll res=0;
            while(temp!=this->nil){
                res+=(power(x,temp->data.F)*temp->data.S);
                temp=temp->next;
            }
            return res;
        }
};

int main(){
    AugLinkedList<pair<int,int>> exp;// F is power S is coeff
    exp.push_back(mp(3,2));
    exp.push_back(mp(2,5));
    exp.displayList();
    cout<<exp.solve(2);
    return 0;
}
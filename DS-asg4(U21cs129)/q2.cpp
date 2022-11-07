#include<iostream>
#include "linkedlist.h"
using namespace std;

void separate(LinkedList<int>& l,LinkedList<int>& odd,LinkedList<int>& even){
    if(l.isEmpty())return;
    odd.head=l.head;
    if(l.head->next==l.nil) {
        return;
    }
    Node<int>* start=l.head;
    even.head=start->next;
    start=start->next;
    start=start->next;
    Node<int>* cur_odd=odd.head;
    Node<int>* cur_even=even.head;
    while(start!=l.nil){
        cur_odd->next=start;
        cur_odd=cur_odd->next;
        start=start->next;
        if(start==l.nil) break;
        cur_even->next=start;
        cur_even=cur_even->next;
        start=start->next;
    }
    cur_odd->next=odd.nil;
    cur_even->next=even.nil;
    return ;
}

int main(){
    LinkedList<int> l,odd,even;
    for(int i=0;i<10;i++)l.push_back(i);
    l.displayList();
    separate(l,odd,even);
    odd.displayList();
    even.displayList();
    return 0;
}
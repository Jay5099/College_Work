#include<iostream>
#include "linkedlist.h"

using namespace std;

int main(){
    LinkedList<int> l1;
    LinkedList<int> l2;
    l1.push_back(5);
    l1.push_back(9);
    l1.push_back(1);
    l1.push_back(10);
    l1.push_back(2);
    l1.push_back(6);
    l1.push_back(4);
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(7);
    l2.push_back(4);
    l2.push_back(9);
    l2.push_back(5);
    LinkedList<int> l3,l4;
    l3.my_union(l1,l2);
    l4.common(l1,l2);
    l1.displayList();
    l2.displayList();
    l3.displayList();
    l4.displayList();
}
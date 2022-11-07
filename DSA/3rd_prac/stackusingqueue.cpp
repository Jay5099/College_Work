#include<iostream>
#include "queue"

void menu(){
    cout<<"---------------\n";
    cout<<"0--exit\n1--push\n2--pop\n3--display Stack\n\n";
    cout<<"---------------\n";
    cout<<"Enter :";
}

int main(){
    queue<int> stack;
    queue<int> aux;
    int code;
    while(true){
        menu();
        cin>>code;
        switch(code){
            case 0:return 0;
            case 1:{
                int val;
                cout<<"Enter the value to be pushed:";
                cin>>val;
                stack.push(val);
            }
            case 2:{
                int prev;
                while(!stack.isEmpty()){
                    
                }
            }
        }
    }
}
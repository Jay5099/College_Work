#include<iostream>

using namespace std;

int top=0;

int main(){
    int a[5]={};
    cout<<endl<<endl<<"******************"<<endl<<endl;
    cout<<"Enter 1 to Undo."<<endl;
    cout<<"Enter 2 to Redo."<<endl;
    cout<<"Enter 3 to display."<<endl;
    cout<<endl<<endl<<"******************"<<endl<<endl;
    while(1){
        cout<<"Enter your choice: ";
        int k;
        cin>>k;
        switch(k){
            case 1:{
                if(top<0){
                cout<<"underflow"<<endl;
                top++;
                break;
                }
                else{
                    cout<<"The popped element is "<<a[top]<<endl;
                    top--;
                    for(int i=top;i>=0;i--){
                        cout<<a[i];
                    }
                    break;
                }
            }
            case 2:{
                if(top>=5){
                cout<<"overflow"<<endl;
                // top--;
                break;
                }
                else{
                    int temp;
                    cout<<"Enter the value: ";
                    cin>>temp;
                    a[top]=temp;
                    cout<<"The inserted element is "<<a[top]<<endl;
                    top++;
                break;
                }
            }
            case 3:{
                
                        cout<<"[ ";
                    for(int i=0;i<=top;i++){
                        cout<<a[i]<<" ";
                    }
                        cout<<"]"<<endl;
                break;
            }
        }
    }
}



// bool check(int top){
//     if(top<0){
//         cout<<"underflow";
//         top++;
//         return  1;
//     }
//     else if(top>=5){
//         cout<<"overflow";
//         top--;
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
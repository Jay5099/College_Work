#include<iostream>
#include<string>

using namespace std;

int top=-1;

bool isbalanced(string expr){
    int i{0};
    char arr[expr.length() + 1];

        for( i=0;i<expr.length();i++){
            if(top==-1){
                top++;
                arr[top]=expr[i];
            }
            else if((arr[top]=='(' && expr[i] == ')')
                    ||(arr[top]=='{' && expr[i] == '}')
                    ||(arr[top]=='[' && expr[i] == ']')){
                        arr[top]='\0';
                        top--;
                         }
            else{
                top++;
                arr[top]=expr[i];
            }
        }
        if(arr[0]=='\0'){
            return true;
        }
        else {return false;}
}


int main()
{
    string expr {};
    cout<<"Enter :"; 
    cin>>expr;
    if (isbalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}

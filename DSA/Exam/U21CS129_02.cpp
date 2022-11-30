#include<iostream>
using namespace std;


class node{
    public:
    node*left;
    int data;
    node*right;
};

int isBST(node* root){
    static node*prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

node* create(int A[],int n){
    node*root=NULL;
    root->data=A[n/2];
    return root;
}

int main(){
    int A[]{1,2,3,4,5,6,7};

    node*root=NULL;
    node*root=create(A,7);
    if(isBST(root)){
        cout<<"yes BST";
    }
    else
        cout<<"No this is not bst";
}

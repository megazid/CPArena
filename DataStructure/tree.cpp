#include<iostream>

using namespace std;

// class Node
// {
//     public:
//         int data;
//         Node *left;
//         Node *right;
//         Node(){
//             data = 0;
//             left = right = NULL;
//         }

// };


// class Tree
// {
//     public:
//     Node *root;
//     Tree(){
//         root = NULL;
//     }
// };

// void inorder(Node *tmp){
//     if(tmp==NULL)return;
//     inorder(tmp->left);
//     cout<<tmp->data<<"\t";
//     inorder(tmp->right);
// }

// void preorder(Node *tmp){
//     if(tmp==NULL)return;
//     cout<<tmp->data<<"\t";
//     preorder(tmp->left);
//     preorder(tmp->right);
// }

// void postorder(Node *tmp){
//     if(tmp==NULL)return;
//     inorder(tmp->left);
//     inorder(tmp->right);
//     cout<<tmp->data<<"\t";
// }

void fakeswap(int &a,int &b){
    int c = a;
    a = b;
    b = c;

}

void fakeswap(int* a,int* b){
    int c = *a;
    *a = *b;
    *b = c;

}
int main(){
    // int x = 10;
    // cout<<x<<"\n";
    // cout<<&x<<"\n";

    // int *p = &x;
    // cout<<p<<"\n";
    // cout<<*p<<"\n";

    int x=4,y=7;
    cout<<x<<" "<<y<<"\n";
    fakeswap(&x,&y);
    cout<<x<<" "<<y<<"\n";
    return 0;
}
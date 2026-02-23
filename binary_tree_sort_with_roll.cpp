#include <iostream>
using namespace std;
class node{
    public:
    int data;
    int roll;
    node *left;
    node *right;
    node(int d,int r){
        data=d;
        roll=r;
        left=right=nullptr;
    }
};
    node* insert(node *root,int d,int r){
        if(root==nullptr){
            return new node(d,r);
        }
        if(root->data>d){
            root->left=insert(root->left,d,r);
        }
        else{
             root->right=insert(root->right,d,r);
        }
        return root;
    }
    void display(node *root){
        if(!root) return;
        display(root->left);
        cout<<root->data<<" is the data ,"<<root->roll<<" is the roll"<<endl;
        display(root->right);
    }

int main(){
    
    node* root=NULL;
    
        root=insert(root,300,1);
        root=insert(root,-400,2);
        root=insert(root,-39,3);
   
    display(root);
}

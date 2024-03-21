#include<iostream>
using namespace std;

class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int data){
        left = NULL;
        right = NULL;
        this->data = data;
    }

};
void preorder(Tree* root){
    if (root == NULL)
    {
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(Tree* root){
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

void inorder(Tree* root){
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

int main(){

}
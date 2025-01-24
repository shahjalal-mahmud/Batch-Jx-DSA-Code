#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        return new Node(value);
    }
    else if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }
    return root;
    
}
void In_Order(Node *root){
    if (root != nullptr)
    {
        In_Order(root->left);
        cout<<root->data<<" ";
        In_Order(root->right);
    }
}
void Pre_Order(Node *root){
    if (root != nullptr)
    {
        cout<<root->data<<" ";
        In_Order(root->left);
        In_Order(root->right);
    }
}
void Post_Order(Node *root){
    if (root != nullptr)
    {
        In_Order(root->left);
        In_Order(root->right);
        cout<<root->data<<" ";
    }
}
int main()
{
    Node *root = nullptr;
    root = insert(root, 70);
    insert(root, 20);
    insert(root, 10);
    insert(root, 60);
    insert(root, 80);
    insert(root, 100);

    In_Order(root);
    cout<<endl;
    Pre_Order(root);
    cout<<endl;
    Post_Order(root);
    return 0;
}
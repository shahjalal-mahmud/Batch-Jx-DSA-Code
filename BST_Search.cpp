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
bool Search(Node *root, int value){
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == value)
    {
        return true;
    }
    return (value < root->data) ? Search(root->left, value) : Search(root->right, value);
}

void In_Order(Node *root){
    if (root != nullptr)
    {
        In_Order(root->left);
        cout<<root->data<<" ";
        In_Order(root->right);
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
    if (Search(root, 80))
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    
    return 0;
}
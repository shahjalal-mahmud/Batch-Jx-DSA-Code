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
Node *findMin(Node *root){
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}
Node *Delete(Node *root, int value){
    if(root == nullptr) return root;
    // Traverse the tree to find the node to be deleted
    if(value < root->data){
        root->left = Delete(root->left, value);
    }else if(value > root->data){
        root->right = Delete(root->right, value);
    }
    else{
        // Node to be deleted is found
        // Case 1: No child or One child
        if(root->left == nullptr){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // Case 2: Two children
        Node *temp = findMin(root->right); // Find the inorder successor of the node to be deleted
        root->data = temp->data; // Replace the data of the node to be deleted with the data of the inorder successor
        root->right = Delete(root->right, temp->data); // Delete the inorder successor
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

    Delete(root, 20);
    Delete(root, 80);
    In_Order(root);
    return 0;
}
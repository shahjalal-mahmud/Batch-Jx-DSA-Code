#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
void Print(Node *n){
    while (n!=nullptr)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}

int main()
{
    Node *p = new Node(10); // head
    Node *q = new Node(20);
    Node *r = new Node(30);

    p->next = q;
    q->next = r;
    
    Print(p);
    return 0;
}
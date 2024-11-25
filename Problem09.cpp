#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
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
    Node *s = new Node(40);

    p->next = q;
    q->next = r;
    r->next = s; // SIngle linked list
    
    s->prev = r;
    r->prev =q;
    q->prev = p; // Double linked list

    Print(p);
    return 0;
}
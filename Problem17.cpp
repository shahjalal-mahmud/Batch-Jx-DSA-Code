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
class Queue{
public:
    Node *rear;
    Node *front; // you can skip this line and follow Problem18 code
    Queue(){
        rear = nullptr;
    }
    void Push(int data){
        Node *newNode = new Node(data);
        if (rear == nullptr)
        {
            rear = front = newNode;
            return;
        }
        newNode->next = rear;
        rear = newNode;
    }
    void Pop(){
        Node *t1 = rear;
        Node *t2 = rear->next;
        while (t2->next!=nullptr)
        {
            t1 = t1->next;
            t2 = t2->next;
        }
        t1->next = nullptr;
    }
    void Print(){
        Node *temp = rear;
        while (temp!=nullptr)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
        cout<<endl;
    }
};

int main()
{
    Queue list;

    list.Push(5);
    list.Push(8);
    list.Push(3);
    list.Push(1);

    list.Print();

    list.Push(31);
    list.Push(20);
    list.Print();

    list.Pop();
    list.Print();

    return 0;
}
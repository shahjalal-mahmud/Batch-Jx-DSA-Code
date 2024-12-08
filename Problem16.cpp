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
class Stack{
public:
    Node *top;
    Stack(){
        top = nullptr;
    }
    void Push(int data){
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }
    void Pop(){
        top = top->next;
    }
    void Print(){
        Node *temp = top;
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
    Stack list;

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
    list.Pop();
    list.Print();
    return 0;
}
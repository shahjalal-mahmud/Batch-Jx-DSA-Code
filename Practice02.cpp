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
class Linkedlist{
public:
    Node *head;
    Linkedlist(){
        head = nullptr;
    }
    void insert_Head(int data){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void Print(){
        Node *temp = head;
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
    Linkedlist list;

    list.insert_Head(10);
    list.insert_Head(20);
    list.insert_Head(30);
    list.insert_Head(40);

    list.Print();
    return 0;
}
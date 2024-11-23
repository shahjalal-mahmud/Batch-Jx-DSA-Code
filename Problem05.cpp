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
    void insert_End(int data){
        Node *newNode = new Node(data);
        Node *temp = head;
        while (temp->next!=nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    // Function for deletion the first node
    void deleteHead(){
        head = head->next;
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

    list.insert_Head(40);
    list.insert_Head(30);
    list.insert_Head(20);
    list.insert_Head(10);
    list.insert_End(50);
    list.Print();

    list.deleteHead();
    list.Print();
    list.deleteHead();
    list.Print();
    return 0;
}
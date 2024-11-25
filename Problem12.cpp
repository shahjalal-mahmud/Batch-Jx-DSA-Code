#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
class Linkedlist
{
public:
    Node *head;
    Linkedlist()
    {
        head = nullptr;
    }
    void insert_Head(int data)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void insert_End(int data){
        Node *newNode = new Node(data);
        Node *temp = head;
        while (temp->next!=nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    void insertNode(int data, int target){
        Node *newNode = new Node(data);
        Node *temp = head;
        while (temp->data!=target)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
    void Print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL";
        cout << endl;
    }
};

int main()
{
    Linkedlist list;

    list.insert_Head(40);
    list.insert_Head(30);
    list.insert_Head(20);
    list.insert_Head(10);

    list.Print();

    list.insertNode(25, 20);
    list.Print();
    return 0;
}
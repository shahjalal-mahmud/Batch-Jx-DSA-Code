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
    void delete_head(){
        head = head->next;
        head->prev = nullptr;
    }
    void delete_end(){
        Node *t1 = head;
        Node *t2 = head->next;
        while (t2->next!=nullptr)
        {
            t1 = t1->next;
            t2 = t2->next;
        }
        t1->next = nullptr;
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
    void ReversePrint(){
        Node *temp = head;
        while (temp->next !=nullptr)
        {
            temp = temp->next;
        }
        while (temp != nullptr)
        {
            cout << temp->data << "<->";
            temp = temp->prev;
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

    list.delete_end();
    list.Print();

    list.ReversePrint();
    return 0;
}
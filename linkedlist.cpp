// A Linked List is a linear data structure in which elements (called nodes) are stored in non-contiguous memory locations.
// It consist data and address pointer of next node


#include <iostream>
using namespace std;

class Node // class to create node
{
public:
    int data;
    Node *next; // Store next node address

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class linkedlist
{
    Node *head; // Point to the first node
    Node *tail; // Point to the last node

public:
    linkedlist()
    {
        head = tail = NULL;
    }

    void push_front(int val) // Add node at front
    {
        Node *newNode = new Node(val); // Dynamic
        /* Node newNode(val); */       // static

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) // Add node at back
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front() // deleting ll from front
    {
        if (head == NULL)
        {
            cout << "The LL is empty\n";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back() // deleting ll from front
    {
        if (head == NULL)
        {
            cout << "LL is empty";
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }
    void outLL() // Output
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    linkedlist ll;
    ll.push_front(1); // calling push_front()
    ll.push_front(2); // calling push_front()
    ll.push_front(3); // calling push_front()
    ll.push_back(4); // calling push_back()
    ll.pop_front(); // calling pop_front()
    ll.pop_back(); // calling pop_back()
    ll.outLL();   // calling outLL()

    return 0;
}
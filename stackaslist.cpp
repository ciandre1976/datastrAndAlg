
#include <iostream>
#include<string>
using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* head = nullptr;

void push(string x)
{
    Node* newnode = new Node();
    newnode->data = x;
    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
};

void pop()
{
    cout << head->data<<"\n";
    head = head->next;
};

void peek()
{
    cout << head->data<<"\n";
};


int main()
{
    push("sasa");
    push("pera");
    push("sasa");
    push("saska");
    peek();
    pop();
    pop();
    peek();
};



#include <iostream>
#include<string>

using namespace std;

struct Node {
    string data;
    Node* next;
    Node* prev;
};

Node* head = nullptr;

void Insert(string n)
{
    Node* newnode = new Node();

    if (head == nullptr)
    {
        newnode->data = n;
        newnode->next = nullptr;
        newnode->prev = nullptr;

        head = newnode;
        return;
    }
        
        newnode->data = n;
        newnode->next = nullptr;
        newnode->prev = nullptr;

        head->prev = newnode;
        newnode->next = head;
        head = newnode;
}

int main()
{
    Insert("sasa");
    Insert("saska");

   
    cout << head->data<<"\n";
    cout << head->next->data;
}


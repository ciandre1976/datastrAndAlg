#include<iostream>

using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node() 
	{
		this->next = nullptr;
	}
	Node(int x)
	{
		this->data = x;
		this->next = nullptr;
	}
};

class SList
{

public:

	Node* head;
	Node* temp;
	SList()
	{
		head = nullptr;
		temp = nullptr;
	};

	void AddElement(Node* element,int n)
	{
		element = new Node(n);

		if (head == nullptr)
		{
			temp = head = element;
		}
		else
		{
			temp->next = element;
			temp = element;
		};
	};

	void RemoveElement(int element)
	{
		Node* prev;
		temp = prev = head;
		while (temp->data != element)
		{
			prev = temp;
			temp = temp->next;
		}

		if (temp->data == element)
		{
			prev->next = temp->next;
		}
	};

   void printList()
	{
	   temp = head;
		while (temp != NULL)
		{
		 cout << "-->" << temp->data << endl;
		 temp = temp->next;
		};
	};
};


int main()
{
	SList* list = new SList();
	Node *n = new Node();

	list->AddElement(n,5);
	list->AddElement(n, 4);
	list->AddElement(n, 55);
	list->AddElement(n, 3);
	list->AddElement(n, 9);
	list->AddElement(n, 119);
	list->printList();
	list->RemoveElement(3);
	list->RemoveElement(119);
	list->RemoveElement(55);
	list->printList();
	
	return 0;
}
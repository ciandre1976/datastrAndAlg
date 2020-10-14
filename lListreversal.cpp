
/*
#include<iostream>

using namespace std;


struct Node {
	int data;
	Node* next;
};

Node* Insert(Node* head, int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->next = head;
		head = temp;
	}
	return head;
}

void Print(Node* head)
{
	while (head != NULL)
	{
		
		cout << head->data<<endl;
		head = head->next;
	}
}

int main()
{
	Node* head = NULL;

	cout << "How many elements you want?\n";
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cout << "Enter element?\n";
		int x;
		cin >> x;
		head = Insert(head, x);  
	}
	Print(head);
	return 0;
}*/
/*

#include<iostream>

struct Node
{
	int data;
	Node* next;
};

Node* head;
void Insert(int data, int n);
void Print();

using namespace std;

int main()
{
	head = NULL;
	Insert(2, 1);
	Insert(3, 2);
	Insert(4, 1);
	Insert(5, 1);
	Print();

	return 0;
}

void Insert(int data, int n)
{
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	if (n == 1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}
	Node* temp2 = head;
	for ( int i = 0;i < n-2;  i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}


void Print()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
	}

}
*/
/*
#include<iostream>

using namespace std;

	struct Node
	{
		int data;
		Node* next;
	};
	Node* head;

	void Insert(int data);
	void Print();
	void Delete(int n);

	int main()
	{
		head = NULL;
		Insert(2);
		Insert(3);
		Insert(5);
		Insert(7);
		Delete(2);
		Print();
	}

	void Insert(int data)
	{
		Node* temp = new Node;
		temp->data = data;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
	}

	void Print()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data;
			temp = temp->next;
		}
	}

	void Delete(int n)//position
	{
		Node* temp1 = head;

		if (n == 1)
		{
			head = temp1->next;
		}
		free(temp1);
		return;

		for (size_t i = 0; i < n-2; i++)
		{
			temp1 = temp1->next;
		}
		Node* temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
	}//greska neggde
	*/
/*
#include<iostream>

struct Node {
	int data;
	Node* next;
};

Node* head = NULL;

void Insert(int n) {
	Node* node = new Node();
	node->data = n;
	node->next = head;
	head = node;
};

void Print()
{
	Node* temp = head;
	while (temp != NULL)
	{
		std::cout << temp->data << "_";
		temp = temp->next;
	}
};

void Reverse()
{
	
}

int main()
{
	Insert(3);
	Insert(4);
	Insert(5);
	Insert(33);
	//Print();
	Reverse();
	Print();
	return 0;
}*/

#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};
Node* head = nullptr;

void Insert(int n)
{
	Node* newnode = new Node();
	newnode->data = n;
	newnode->next = head;
	head = newnode;
}

void Print()
{
	cout << "List is :\n";
	Node* tmp = head;
	while (tmp!=nullptr)
	{
		cout <<"-"<<tmp->data;
		tmp = tmp->next;
	}
}

void Reverse()
{
	Node* curr, * prev, * next;
	prev = nullptr;
	curr = head;
	while (curr!=NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
}


int main()
{
	Insert(3);
	Insert(4);
	Insert(6);
	Insert(9);
	Insert(5);
	Reverse();
	Print();
	return 0;
}
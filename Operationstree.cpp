#include<iostream>
#include<queue>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

int  FindNode(Node* node, int x)
{
	if (node == NULL)
	{
		cout << "NOT FOUND\n";
		return 0;
	}
	else if (node->data == x)
	{
		cout << "found\n";
		return 1;
	}
	else if (x < node->data)
	{
		FindNode(node->left, x);
	}
	else
	{
		FindNode(node->right, x);
	}
}

Node* Create(int x)
{
	Node* newnode = new Node();
	newnode->data = x;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

Node* InsertData(Node* root, int data)
{
	if (root == NULL)
	{
		root = Create(data);
	}
	else if (data < root->data)
	{
		root->left = InsertData(root->left, data);
	}
	else
	{
		root->right = InsertData(root->right, data);
	}
	return root;
}

void Inorder(Node* root)
{
	if (root == NULL)return;
	Inorder(root->left);
	cout << root->data<<"-";
	Inorder(root->right);
}

void LevelOreder(Node* root)
{
	queue<Node*> Q;
	Node* current = root;
	Q.push(root);
	while (!Q.empty())
	{
		current=Q.front();
		cout << current->data<<"-";

		if (current->left != NULL)Q.push(current->left);
		if (current->right != NULL)Q.push(current->right);
		Q.pop();
	}
}

void FindMinimum(Node*root)
{
	if (root == NULL)return;
	Node* cur = root;
	while (cur->left != NULL)
	{
		cur = cur->left;
	}
	cout << cur->data;
}

int main()
{
	Node* root = NULL;

	root = InsertData(root, 3);
	root = InsertData(root, 4);
	root = InsertData(root, 2);
	root = InsertData(root, 5);
	root = InsertData(root, 7);
	root = InsertData(root, 12);

	FindNode(root, 1);
	FindNode(root, 21);
	FindNode(root, 7);
	FindNode(root, 12);

	LevelOreder(root);

	cout << "\n";

	Inorder(root);

	cout << "\n";

	FindMinimum(root);

	return 0;
}
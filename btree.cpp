

#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* Create()
{
    int x;
    Node* newnode;
    newnode= new Node();
    std::cout << "Enter data\n";
    std::cin >>x;
        if(x==0)
        {
            return 0;
        }
    newnode->data = x;
    std::cout << "Enter left data\n";
    newnode->left = Create();
    std::cout << "Enter right data\n";
    newnode->right = Create();
    return newnode;
}

void Preorder(Node* root)
{
    if (root == 0)
    {
        return;
    }
    std::cout << root->data;
    if(root->left!=NULL)
    Preorder(root->left);
    if (root->right != NULL)
    Preorder(root->right);
}

void Inorder(Node* root)
{
    if (root == 0)
    {
        return;
    }
    Inorder(root->left);
    std::cout << root->data;
    Inorder(root->right);
   
}

void Postorder(Node* root)
{
    if (root == 0)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    std::cout << root->data<<std::endl;
}

int main()
{
    Node* newnode;
    newnode=Create();
 //   Preorder(newnode);
 //   Inorder(newnode);
    Postorder(newnode);
    std::cin.get();
}


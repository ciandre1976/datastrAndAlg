
#include <iostream>
#include<stack>//FROM STANDARD LIB

class Stack {
private:
    char A[101];
    int top;
public:
   void  Push(int x);
   void Pop();
   int Top();
   bool isEmpty();
};

void Reverse(char *C,int n)
{
    std::stack<char> Stack;

    for (size_t i = 0; i < n; i++)
    {
        Stack.push(C[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        C[i] = Stack.top();
        Stack.pop();
    }

   
}

int main()
{
    char C[51];
    std::cout << "Enter string :\n";
    gets_s(C);
    Reverse(C, strlen(C));
    std::cout << C;
}


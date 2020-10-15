
#include <iostream>
using namespace std;


int a[5];
int top = -1;

int push(int x)
{
    if (top >= 5-1) {
        cout << "stack is full\n";
        return top;
    }
   /// top++;
   // a[top] = x;
    a[++top] = x;
    return 0;
}

void pop()
{
    if (top == -1)
    {
        cout << "empty";
        return;
    }
    cout <<"poped "<< a[top]<<"\n";
    top--;
}

int main()
{
    push(3);
    push(4);
    push(5);
    push(6);
    push(12);
    push(7);
    pop();
    pop();
}


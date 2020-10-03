#include<stdio.h>

#define N  5

int front=-1;
int rear=-1;
int queue[N];

void enqueue(int n)
{
  if(rear==N-1)
  {
      printf("queue is full");
  }
  else if(front==-1&&rear==-1)
  {
      front=rear=0;
      queue[rear]=n;
  }
  else
  {
      rear++;
      queue[rear]=n;
  }
  
}

void dequeue()
{
    if(front==-1&&rear==-1)
    {
        printf("empty queue");
    }
    else if(front==rear)
    {
          front=rear=-1;  
    }
    else{
        printf("%d\n",queue[front]);
        front++;    
    }
};

int main()
{
        enqueue(45);
        enqueue(45);
        enqueue(45);
        enqueue(45);
        enqueue(45);
        enqueue(45);
        enqueue(45);
    return 0;
}
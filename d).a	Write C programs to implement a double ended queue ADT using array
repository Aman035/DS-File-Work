#include<stdio.h>
#include<stdlib.h>
#define M 50
int deque[M];
int front=-1;
int rear=-1;

void enqueuer()
{
 int num;
 printf("Enter the data\n");
 scanf("%d",&num);
 if( (front==0 && rear==M-1) || (front==rear+1) )
 {
  printf("Queue is full\n");
 }
 if(front==-1)       
 {
  front=0;
  rear=0;
 }
 else
 {
  if(rear==M-1)
   rear=0;
  else
   rear=rear+1;
 }
 deque[rear]=num;
}

void enqueuef()
{
 int num;
 printf("Enter the data \n");
 scanf("%d",&num);
 if( (front==0 && rear==M-1) || (front==rear+1) )
 {
  printf("Queue is full\n");
 }
 if(front==-1)     
 {
  front=0;
  rear=0;
 }
 else
 {
  if(front==0)
   front=M-1;
  else
   front=front-1;
 }
 deque[front]=num;
}


void dequeuer()
{
 if(front==-1)
 {
  printf("Queue is empty\n");
  return;
 }
 printf("The deleted element is %d\n", deque[rear]);
 if(front==rear)         
 {
  front=-1;
  rear=-1;
 }
 else
 {
  if(rear==0)
   rear=M-1;
  else
   rear=rear-1;
 }
}

void dequeuef()
{
 if(front==-1)
 {
  printf("Queue is empty\n");
  return;
 }
 printf("The deleted element is %d\n", deque[front]);
 if(front==rear)      
 {
  front=-1;
  rear=-1;
 }
 else
 {
  if(front==M-1)
   front=0;
  else
   front=front+1;
 }
}

void display()
{
 int l=front, r=rear;
 if(l==-1)
 {
  printf("Queue is Empty\n");
  return;
 }
 printf("The queue is\n");
 if(l<=r)
 {
  while(l<=r)
  {
   printf("%d ",deque[l]);
   l++;
  }
 }
 else
 {
  while(l<=M-1)
  {
   printf("%d ",deque[l]);
   l++;
  }
  l=0;
  while(l<=r)
  {
   printf("%d ",deque[l]);
   l++;
  }
 }
 printf("\n");
}


int main()
{
  int n;
  printf("Enter 1 for enqueue from front\nEnter 2 for enqueue from rear\nEnter 3 for dequeue from front\nEnter 4 for dequeue from rear\nEnter 5 for displaying the queue\nAny other key for exit\n");

  
  while(1)
  {
    scanf("%d",&n);
    switch(n)
    {
      case 1:enqueuef();
      break;
      case 2:enqueuer();
      break;
      case 3:dequeuef();
      break;
      case 4:dequeuer();
      break;
      case 5:display(front);
      break;
      default:exit(0);
    }
  }
  return 0;
}

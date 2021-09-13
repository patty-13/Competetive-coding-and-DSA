/*
    stack is just a simple array with lifo approach that is 
    last in first out. 
    steps:
    1.first check if the stack is empty if not then push an element,
        overfill.
    2.check if the stack is 
        underfill.

    Now stl funcitons for stack are:
    ->


*/
#include "iostream"
#include "algorithm"
using namespace std;
int stack[1000];
static int size = 10;
int top = -1;
void push(int n)
{
    stack[top] = n;
}
void pop()
{
  int x =   stack[top--];
  cout<<"element removed"<<x;
}
int main()
{
    int n;
    cin>>n;
for(int i= 0; i< 10; i++)
{
    cin>>n;
   push(n);
   pop();
}
}
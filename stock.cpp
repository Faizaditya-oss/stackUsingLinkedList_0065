#include <iostream>
using namespace std;

// Node class representing a single node in the Linked List
class Node
{
public : 
    int data;
    Node *next;

    Node()
    {
        next = NULL;    }
};

// Stack class
class Stack
{
private :
   Node *top; // Pointer to the top node of  the stack

public :
   Stack()
   {
    top = NULL; // Initialize the stack with a null top
   }

   // Push operation: Insert on element onto the top of the
   int push(int value)
   {
    Node *newNode = new Node(); 
    newNode->data = value;
    newNode->next = top;
    cout << "Push value: " << value << endl;
    return value;
   }
};

// Pop operation :
void pop()
{
    Node *temp = top;
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return;
    }


    cout << "Popped value: " << temp->data << endl;
    top = temp->next;
    delete temp;
}
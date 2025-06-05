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

// Peek/Top operation: 
void peek()
{
    if(isEmpty())
    {
        cout << "List is empty." << endl;
    }
    else
    {
        Node *current = top;
        while (current != NULL)
        {
            cout << current->data << " " << endl;
            current = current->next;
        }
        cout << endl;
    }
}
bool isEmpty()
{
    return top == NULL; // Return true if the top pointer
}
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        
    }
}


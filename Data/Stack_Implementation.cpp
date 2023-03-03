// Write a menu driven program in C++ to push and pop
// values from a linked stack storing floating point numbers.
// Display the contents of the stack after each operation.
#include <iostream>
using namespace std;

class stack {

  struct node {
    float data;
    node *link;
  };
  node *top;

public:
  stack() { top = NULL; }
  void push();
  void pop();
  void display();
};

void stack::push() {
  node *temp;
  temp = new node;

  cout << "Enter the data: ";
  cin >> temp->data;
  if (top == NULL) {
    temp->link = NULL;
  } else {
    temp->link = top;
  }
  top = temp;
  display();
}

void stack::pop() {
  if (top == NULL) {
    cout << "\nThe stack is empty.\n";
  } else {
    node *temp;
    temp = top;
    top = top->link;
    cout << "\nThe deleted element is " << temp->data << "\n";
    delete temp;
  }
  display();
}

void stack::display() {
  if (top == NULL) {
    cout << "\nThe stack is empty";
  } else {
    node *temp;
    for (temp = top; temp != NULL; temp = temp->link) {
      cout << temp->data << "\n";
    }
  }
}

int main() {
  int choice;
  stack s;

  do {
    cout << "\nEnter your choice:\n1. Push an element onto the stack\n2. Pop "
            "an element from the stack\n3. Display the stack\n4. Exit\n";
    cin >> choice;
    switch (choice) {
    case 1:
      s.push();
      break;
    case 2:
      s.pop();
      break;
    case 3:
      s.display();
      break;
    case 4:
      break;
    default:
      cout << "\nIncorrect Choice. Please re-enter\n";
      break;
    }
  } while (choice != 4);
}

#include<iostream>
using namespace std;

class stack
{
	struct node
	{
		int data;
		node *next;
	};
	node *top;
	public:
			stack()
			{
				top = NULL;
			};
			void push();
			void pop();
			void display();
};

void stack::push()
{
	node *temp;
	temp = new node;
	cout<<"\nEnter the data: ";
	cin>>temp -> data;
	
	temp -> next = top;
	top = temp;
	cout<<"\n"<<temp -> data<<" is pushed onto the stack.";
	display();
}

void stack::pop()
{
	node *temp;
	if(top == NULL)
	{
		cout<<"\nThe stack is empty.";
	}
	else
	{
		temp = top;
		top = top -> next;
		
		cout<<"\n"<<temp -> data<<" is popped from the stack.";
		delete temp;
		display();
	}
}

void stack::display()
{
	node *temp;
	cout<<"\n\nThe stack contains:";
	for(temp = top; temp != NULL; temp = temp -> next)
	{
		cout<<"\n"<<temp -> data;
	}
}

int main()
{
	stack a;
	int choice;
	
	do
	{
		cout<<"\n\nEnter your choice:\n1. Push onto the stack.\n2. Pop from the stack.\n3. Display the stack\n4. Exit\n";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
					a.push();
					break;
			case 2:
					a.pop();
					break;
			case 3:
					a.display();
					break;
			case 4:
					break;
			default:
					cout<<"\nIncorrect Choice";
					break;
		}
	}while(choice != 4);	
}

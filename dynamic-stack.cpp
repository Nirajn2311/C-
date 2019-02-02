#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
	int data;
	node *next;
};

class stack
{
	node *top;

  public:
	stack()
	{
		top = NULL;
	};
	void stackpush();
	void stackpop();
	void stackdisplay();
};

void stack::stackpush()
{
	node *ptr;
	ptr = new node;
	cout << "Enter element data: ";
	cin >> ptr->data;
	if (top == NULL)
	{
		ptr->next = NULL;
		top = ptr;
	}
	else
	{
		ptr->next = top;
		top = ptr;
	}
}

void stack::stackpop()
{
	node *ptr;
	ptr = top;
	if (top == NULL)
	{
		cout << endl
			 << "STACK UNDERFLOW!!!";
	}
	else
	{
		cout << "Element deleted: " << ptr->data;
		top = top->next;
		delete ptr;
	}
}

void stack::stackdisplay()
{
	node *ptr;
	ptr = top;
	if (top == NULL)
	{
		cout << endl
			 << "No elements";
	}
	else
	{

		cout << "The stack is: " << endl;
		while (ptr != NULL)
		{
			cout << ptr->data << endl;
			ptr = ptr->next;
		}
	}
}

int main()
{
	char ans;
	int opt;
	stack s1;
	do
	{
		cout << endl
			 << "Stack Program";
		cout << endl
			 << "1) Push data into stack";
		cout << endl
			 << "2) Pop data from stack";
		cout << endl
			 << "3) Display stack";
		cout << endl
			 << "Enter your option: ";
		cin >> opt;
		switch (opt)
		{
		case 1:
			s1.stackpush();
			break;

		case 2:
			s1.stackpop();
			break;

		case 3:
			s1.stackdisplay();
			break;

		default:
			cout << "INVALID OPTION!!!";
			break;
		}
		cout << endl
			 << "Do you want to continue(y/n): ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	return 1;
}